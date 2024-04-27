#include<bits/stdc++.h>

using namespace std;

vector<int> p = {4, 8, 15, 16, 23, 42};
int ans[4];

int main()
{
	for(int i = 0; i < 4; i++)
	{
		cout << "? " << i + 1 << " " << i + 2 << endl;
		cout.flush();
		cin >> ans[i];
	}

    do {
    
        bool check = true;

        for(auto i = 0; i < 4; i++)
            check &= (p[i] * p[i + 1] == ans[i]);

        if(check) break;

    } while(next_permutation(p.begin(), p.end()));


	cout << "!";
	for(int i = 0; i < 6; i++)
		cout << " " << p[i];
	cout << endl;
	cout.flush();

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<int> v = {4, 8, 15, 16, 23, 42};
int ans[4];
vector<int> res;


int main() {

	for(auto i = 0; i < 4; i++) {
		if(i <= 1) {
		    cout << "? " << i + 1 << " " << i + 1 << '\n';
		    cout.flush();
		    cin >> ans[i];
		}
		else {
		    cout << "? " << i + 1 << " " << i + 2 << '\n';
		    cout.flush();
		    cin >> ans[i];
		}
	}


	res.push_back(sqrt(ans[0]));
	v.erase(find(v.begin(), v.end(), sqrt(ans[0])));

	res.push_back(sqrt(ans[1]));
	v.erase(find(v.begin(), v.end(), sqrt(ans[1])));


	vector<int> A(2, 0);
	vector<int> B(2, 0);
	vector<int> C(2, 0);

	int count = 0;
	for(auto i = 0; i < 4; i++) {
		for(auto j = 0; j < 4; j++) {
		    if(count == 0) {
			    if(v[i] * v[j] == ans[2]) {
				count++;

				A[0] = v[i];
				A[1] = v[j];

				
			    }
		    }
		}
	}
	
	count = 0;
	for(auto i = 0; i < 4; i++) {
		for(auto j = 0; j < 4; j++) {
		    if(count == 0) {
			    if(v[i] * v[j] == ans[3]) {
			  	count++;
			  	
				B[0] = v[i];
				B[1] = v[j];
\
			    }
		    }
		}
	}
	
	int buff;	

	for(auto i : A) {
		for(auto j : B) {
			if(i == j) buff = i;
		}
	}

	for(auto i : A) {
		auto it = std::find(v.begin(), v.end(), i);
	    	if (it != v.end()) {
			v.erase(it);
	      	}
	}
	
	for(auto i : B	) {
		auto it = std::find(v.begin(), v.end(), i);
	    	if (it != v.end()) {
			v.erase(it);
	      	}
	}

	A.erase(remove(A.begin(), A.end(), buff), A.end());
	B.erase(remove(B.begin(), B.end(), buff), B.end());
	
	res.push_back(A[0]);
	res.push_back(buff);
	res.push_back(B[0]);
	res.push_back(v[0]);
	
	
	    cout << "!";
	    for(auto i : res) {
		cout << " " << i; 
	    }
	    cout << '\n';
  cout.flush();
    return 0;
}

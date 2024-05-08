#include <iostream>
#include <vector>
#include <algorithm> // for std::rotate, std::max_element
using namespace std;

#define l long
#define iter iterator
#define v vector
#define max_e max_element
#define min_e min_element

vector<l> vec;
l cnt = 0;


void do_stuff(int l1, int r1, int l2, int r2) {
    
    if (*max_e(vec.begin() + l1, vec.begin() + r1 + 1) > *min_e(vec.begin() + l2, vec.begin() + r2)) {
        int R=l2;
        for(int i=l1;i<=r1;i++){
            swap(vec[i],vec[R]);
            R++;
        }
        cnt++;
    }

    if(l1==r1)return;

    int mid1=(l1+r1)/2;
    int mid2=(l2+r2)/2;
 
    do_stuff(l1,mid1,mid1,r1);
    do_stuff(l2,mid2,mid2,r2);
}

void f() {
    l n;
    cin >> n;
    vec.clear(); // Clear the vector before reading new inputs
    for (auto i = 0; i < n; i++) {
        l val;
        cin >> val;
        vec.push_back(val);
    }

    if(is_sorted(vec.begin(), vec.end())){
        cout<<0<<endl;
        return ;
    }

    int mid = (n + 1) / 2;
    do_stuff(0, mid, mid, n);
    
    if(is_sorted(vec.begin(), vec.end())){
        cout<< cnt <<endl;
    }
    else{
        cout<<-1<<endl;
    }

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cnt = 0;
        f();
    }

    return 0;
}


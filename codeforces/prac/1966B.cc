#include <bits/stdc++.h>
using namespace std;


void f() {
    int n, m = 0; cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));    

    for(auto i = 0; i < grid.size(); i++) {
        for(auto j = 0; j < grid[0].size(); j++) {
            cin >> grid[i][j];
        }
    }

    bool is_same = true;
    char ch = grid[0][0];
    
    for(auto i = 0; i < grid[0].size(); i++) {
        if(grid[0][i] == ch) {
            continue; 
        }
        else {
            is_same = false;    
        }
    }

    if(is_same) {
        for(auto i = 0; i < grid[0].size(); i++) {
            if(grid[0][i] == ch) {
                continue; 
            }
            else {
                is_same = false;    
            }
        }

        
    }


}



int main() {
    int t; cin >> t;

    while(t--) {
        f();

    }


    return 0;
}

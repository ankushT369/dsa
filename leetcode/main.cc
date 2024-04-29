#include <bits/stdc++.h> 
using namespace std;

int char_to_digit(char ch) {
    return ch - '0';
}

int32_t convert_to_num(vector<int> buff, int64_t ans, char sign) {
    int32_t l_range =  ((1 << 31) + 1);
    int32_t r_range = (1u << 31) - 1;


    for(auto i = 0; i < buff.size(); i++) {
        ans = ans * 10 + buff[i];
    }

    if(sign == '-') {
        ans *= -1;
        if(ans < l_range) {
            return l_range;
        }
    }
    else {
        if(ans > r_range) {
            return r_range;
        }

    }

    return ans;
}

int myAtoi(string s) {
    int len = 0;
    char sign_buffer = '+';
    vector<int> buffer;
    int64_t ans = 0;

    while(len  < s.size()) {
        if(s[len] == ' ') len++;
        else {
            if(isdigit(s[len])) {
                buffer.push_back(char_to_digit(s[len]));
                len++;
            }
            else {
                if(s[len] == '+' || s[len] == '-') {
                    sign_buffer = s[len];
                    len++;
                }
                else {
                    if(isalpha(s[len])) {
                        len++;
                    }
                }
            }
        }
    }

    return convert_to_num(buffer, ans, sign_buffer);
}


int main() {
    cout << myAtoi("42");
    cout << '\n' << INT_MAX;
    return 0;
}

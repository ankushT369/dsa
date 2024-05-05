#include <bits/stdc++.h>
using namespace std;

int count_vowel = 0;
int count_conso = 0;

bool conso_check(string word, vector<char> conso) {

    char lower_case;
    for(auto ch : word) {
        if(isupper(ch)) {
            lower_case = tolower(ch);
            for(auto i : conso) {
                if(lower_case == i) count_conso++;
            }

        }
        else {
            for(auto i : conso) {
                if(ch == i) count_conso++;
            }
        }
    }

    if(count_conso > 0) return true;
    else return false;       

}

bool vowel_check(string word, vector<char> vowel) {

    char lower_case;
    for(auto ch : word) {
        if(isupper(ch)) {
            lower_case = tolower(ch);
            for(auto i : vowel) {
                if(lower_case == i) count_vowel++;
            }

        }
        else {
            for(auto i : vowel) {
                if(ch == i) count_vowel++;
            }
        }
    }

    if(count_vowel > 0) return true;
    else return false;

}

bool isValid(string word) {
    bool res = true;
    int count_dig = 0;
    
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    vector<char> conso = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    
    if(word.size() >= 3) {
        // do nothing
    }
    else return false;
    
    for(auto i : word) {
        if(isdigit(i)) {
            count_dig++;
        }
    }
    if(count_dig == 0) return false;
    

    if(vowel_check(word, vowel) == false) return false;
    if(conso_check(word, conso) == false) return false;


    return true;
}

int main() {
    cout << isValid("235Adas") << '\n';
    return 0;
}








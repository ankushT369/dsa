/*
#include <iostream>

int main() {
    int a = 1;
    char c = static_cast<char>(a + '0'); // Converts 1 to the character '1'
    std::cout << "The character is: " << c << std::endl;
    return 0;
}
*/
#include <iostream>

int main() {
    int a = 8;
    char c = '0' + a; // '0' + 1 = '1'
    std::cout << "The character is: " << c << std::endl;
    return 0;
}


#include <iostream>
#include <list>
#include <algorithm> // Include the <algorithm> header

int main() {
    // Using list
    std::list<int> myList;

    // Inserting elements into the middle of the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Inserting 25 between 20 and 30
    auto it = std::find(myList.begin(), myList.end(), 20);
    if (it != myList.end()) {
        myList.insert(it, 25);
    }

    std::cout << "List: ";

    for (int num : myList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}


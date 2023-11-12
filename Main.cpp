#include <iostream>

using namespace std;

void removeCharacterAtIndex(string& str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
        cout << "Character at index " << index << " removed: " << str << endl;
    }
    else {
        cout << "Invalid index. No character removed." << endl;
    }
}

int main() {
    cout << "Enter a string: ";
    char inputCharArray[100];
    cin >> inputCharArray;

    string inputString(inputCharArray);

    cout << "Enter the index of the character to remove: ";
    int index;
    cin >> index;

    removeCharacterAtIndex(inputString, index);

    return 0;
}
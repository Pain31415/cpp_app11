#include <iostream>

using namespace std;

void insertCharacter(string& str, char charToInsert, int position) {
    if (position >= 0 && position <= str.length()) {
        str.insert(position, 1, charToInsert);
        cout << "Character '" << charToInsert << "' inserted at position " << position << ": " << str << endl;
    }
    else {
        cout << "Invalid position. Character not inserted." << endl;
    }
}

int main() {
    // Input the string
    cout << "Enter a string: ";
    string inputString;
    cin >> inputString;

    cout << "Enter the character to insert: ";
    char charToInsert;
    cin >> charToInsert;

    cout << "Enter the position to insert the character: ";
    int position;
    cin >> position;

    insertCharacter(inputString, charToInsert, position);

    return 0;
}
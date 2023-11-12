#include <iostream>

using namespace std;

void removeAllOccurrences(char* str, char charToRemove) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    int i = 0;
    int j = 0;

    while (i < length) {
        if (str[i] != charToRemove) {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';
}

int main() {
    cout << "Enter a string: ";
    char inputCharArray[100];
    cin >> inputCharArray;

    cout << "Enter the character to remove: ";
    char charToRemove;
    cin >> charToRemove;

    removeAllOccurrences(inputCharArray, charToRemove);

    cout << "String after removing '" << charToRemove << "': " << inputCharArray << endl;

    return 0;
}
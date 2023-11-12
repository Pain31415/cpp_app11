#include <iostream>

using namespace std;

int countOccurrences(const char* str, char targetChar) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == targetChar) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << "Enter a string: ";
    char inputCharArray[100];
    cin.getline(inputCharArray, sizeof(inputCharArray));

    cout << "Enter the target character: ";
    char targetChar;
    cin >> targetChar;

    int occurrences = countOccurrences(inputCharArray, targetChar);

    cout << "The target character '" << targetChar << "' occurs " << occurrences << " times in the string." << endl;

    return 0;
}
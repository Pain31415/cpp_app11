#include <iostream>

using namespace std;

void replaceDotsWithExclamation(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
}

int main() {
    cout << "Enter a string: ";
    char inputCharArray[100];
    cin.getline(inputCharArray, sizeof(inputCharArray));

    replaceDotsWithExclamation(inputCharArray);

    cout << "Modified string: " << inputCharArray << endl;

    return 0;
}
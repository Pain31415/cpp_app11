#include <iostream>

using namespace std;

int main() {
    const int maxSize = 100;
    char inputString[maxSize];

    cout << "Enter a string: ";
    cin.getline(inputString, maxSize);

    int letterCount = 0, digitCount = 0, otherCount = 0;

    for (int i = 0; inputString[i] != '\0'; ++i) {
        if ((inputString[i] >= 'A' && inputString[i] <= 'Z') || (inputString[i] >= 'a' && inputString[i] <= 'z')) {
            letterCount++;
        }
        else if (inputString[i] >= '0' && inputString[i] <= '9') {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Letters: " << letterCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Other characters: " << otherCount << endl;

    return 0;
}
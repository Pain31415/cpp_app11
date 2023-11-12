#include <iostream>

using namespace std;

void countCharacters(const char* str, int& letterCount, int& digitCount, int& otherCount) {
    letterCount = digitCount = otherCount = 0;

    for (size_t i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            letterCount++;
        }
        else if (isdigit(str[i])) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }
}

int main() {
    const char pattern[] = ",.!?#:; (){}[]@*\'\"_-";
    const uint64_t size = 1000;
    char str[size];

    cout << "Enter string: ";
    cin.getline(str, size);

    int letterCount, digitCount, otherCount;

    countCharacters(str, letterCount, digitCount, otherCount);

    cout << "Letters: " << letterCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Other characters: " << otherCount << endl;

    return 0;
}
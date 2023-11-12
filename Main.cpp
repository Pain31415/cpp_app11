#include <iostream>

using namespace std;

int countWords(const char* sentence) {
    int wordCount = 0;
    bool inWord = false;

    for (const char* ptr = sentence; *ptr != '\0'; ++ptr) {
        if (isspace(*ptr)) {
            if (inWord) {
                inWord = false;
                wordCount++;
            }
        }
        else {
            inWord = true;
        }
    }

    if (inWord) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    cout << "Enter a sentence: ";
    const int maxSize = 100;
    char inputSentence[maxSize];
    cin.getline(inputSentence, maxSize);

    int words = countWords(inputSentence);

    cout << "Number of words: " << words << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    char originalString[] = "New text for testing";

    for (size_t i = 0; i < sizeof(originalString); ++i) {
        if (originalString[i] == ' ') {
            originalString[i] = '\t';
        }
    }

    std::cout << originalString << std::endl;

    return 0;
}
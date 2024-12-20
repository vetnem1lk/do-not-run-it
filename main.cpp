#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void doo(const string& word) {
    int wordIndex = 0;
    int row, col;
    for (row = 0; row < 6; ++row) {
        for (col = 0; col < 7; ++col) {
            if ((row == 0 && col % 3 != 0) || (row == 1 && col % 3 == 0) ||
                (row - col == 2) || (row + col == 8)) {
                cout << word[wordIndex % word.size()];
                wordIndex++;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

}

int main() {
    doo("ý");
    return 0;
}

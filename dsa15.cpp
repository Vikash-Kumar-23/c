#include <iostream>
#include <string>
using namespace std;

string toBinary(int n) {
    string result = "";
    unsigned int mask = 1 << 31;  // Start with the highest bit for a 32-bit integer

    for (int i = 0; i < 32; i++) {
        if (n & mask) {
            result += "1";
        } else {
            result += "0";
        }
        mask >>= 1;  // Shift the mask to the right
    }

    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Binary representation: " << toBinary(n) << endl;

    return 0;
}

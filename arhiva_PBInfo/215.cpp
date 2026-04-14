#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s = to_string(n);
    int size = 6;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                cout << 0;
            } else if (j > i) {
                cout << s[4 - i];
            } else {
                cout << s[4 - j];
            }

            if (j != size - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
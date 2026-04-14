#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPali(int n) {
    string s = to_string(n);
    string S = s;
    reverse(S.begin(), S.end());
    if (s==S) return true;
    return false;
}

int main()
{
    long long largest = 67;
    for (int i = 999; i > 1; i--) {
        for (int j = 999; j > 1; j--) {
            long long bro = j*i;
            if (bro <= largest) {
                break;
            }
            if (isPali(bro)) {
                largest = bro;
            }
        }
    }
    cout << largest;
    return 0;
}
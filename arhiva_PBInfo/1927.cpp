#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

bitset<1000001> numbers;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        numbers[nr] = true;
    }

    for (int i = 0; i < 1000001; i++)
    {
        if (numbers[i] == true)
        {
            cout << i << ' ';
        }
    }
    return 0;
}
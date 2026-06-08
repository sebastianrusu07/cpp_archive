#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string encrypted,key;
    cin >> encrypted >> key;

    string res;
    for(int i=0;i<encrypted.length();i++)
    {
        char c = encrypted[i];
        char ans = (c - key[i] + 26) % 26 + 'A';

        res += ans;
        key += ans;
    }
    cout << res;
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    string s,attempt;
    cin >> s >> attempt;
    reverse(s.begin(), s.end());
    cout << (s==attempt ? "YES" : "NO");
    return 0;
}
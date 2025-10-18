#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int nr;
    cin >> nr;
    int remember = nr;

    string a;
    for(int i = 9; i >= 2; i--)
    {
        while (nr%i==0)
        {
            nr = nr/i;
            a=to_string(i)+a;
        }
    }
    if (a.empty() || nr != 1)
    {
        cout << "nu exista";
        return 0;
    }
    cout << a;
    return 0;
}


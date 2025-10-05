#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int  a,b;
    cin >> a >> b;

    if (a/10%10 == b/10%10)
    {
        cout << a+b;
    }else
    {
        if (a/10%10 < b/10%10)
        {
            cout << b;
        }else
        {
            cout << a;
        }
    }
    return 0;
}
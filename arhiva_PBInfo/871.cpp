#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    string nr;
    cin >> nr;
    char from,to;
    cin >> from >> to;
    for (int i = 0; i < nr.length(); i++)
    {
        if (nr[i]==from)
        {
            cout << to;
        }else
        {
            cout << nr[i];
        }
    }
    return 0;
}
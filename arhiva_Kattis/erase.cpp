#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int switches;
    cin >> switches;

    string a,b;
    cin >> a >> b;

    if (switches%2==0)
    {
        cout << (a==b?"Deletion succeeded":"Deletion failed");
        return 0;
    }else
    {
        int len = a.length();
        for (int i=0;i<len;i++)
        {
            if (a[i]==b[i])
            {
                cout << "Deletion failed";
                return 0;
            }
        }
        cout << "Deletion succeeded";
    }
    return 0;
}
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
    bool firstPar = false;
    if (nr[0]%2==0)
    {
        firstPar = true;
    }
    if (firstPar)
    {
        for (int i = 0; i < nr.length(); i++)
        {
            bool stop = true;
            if (i%2==0&&nr[i]%2==0)
            {
                stop = false;
            }
            if (i%2!=0&&nr[i]%2!=0)
            {
                stop = false;
            }
            if (stop)
            {
                cout << "nu";
                return 0;
            }
        }
    }else
    {
        for (int i = 0; i < nr.length(); i++)
        {
            bool stop = true;
            if (i%2!=0&&nr[i]%2==0)
            {
                stop = false;
            }
            if (i%2==0&&nr[i]%2!=0)
            {
                stop = false;
            }
            if (stop)
            {
                cout << "nu";
                return 0;
            }
        }
    }
    cout << "da";
    return 0;
}
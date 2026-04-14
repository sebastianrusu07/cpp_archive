#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first,second;
    cin >> first >> second;
    if (first>second)
    {
        for (int i = 3; i <= n; i++)
        {
            int nr;
            cin >> nr;
            if (i%2==0)
            {
                if (nr>=second)
                {
                    cout << "NU";
                    return 0;
                }
            }else
            {
                if (nr<=second)
                {
                    cout << "NU";
                    return 0;
                }
            }
            second=nr;
        }
    }else
    {
        for (int i = 3; i <= n; i++)
        {
            int nr;
            cin >> nr;
            if (i%2==0)
            {
                if (nr<=second)
                {
                    cout << "NU";
                    return 0;
                }
            }else
            {
                if (nr>=second)
                {
                    cout << "NU";
                    return 0;
                }
            }
            second=nr;
        }
    }
    cout << "DA";
    return 0;
}
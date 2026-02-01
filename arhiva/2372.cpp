#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> divizori;
    int i;
    for (i = 2; i*i < n; i++)
    {
        if (n % i == 0)
        {
            divizori.push_back(i);
            divizori.push_back(n/i);
        }
    }
    if (i*i==n)
    {
        divizori.push_back(i);
    }

    sort(divizori.begin(), divizori.end());

    if (divizori.size() < 3)
    {
        cout << "nu exista";
        return 0;
    }

    int found=0;
    for (int a=0;a<divizori.size();a++)
    {
        for (int b=a+1; b<divizori.size(); b++)
        {
            for (int c=b+1; c<divizori.size(); c++)
            {
                int x = divizori[a];
                int y = divizori[b];
                int z = divizori[c];
                if (x+y+z==n)
                {
                    cout << x << ' ' << y << ' ' << z << endl;
                    found = 1;
                }
            }
        }
    }
    if (!found)
    {
        cout << "nu exista";
    }
    return 0;
}
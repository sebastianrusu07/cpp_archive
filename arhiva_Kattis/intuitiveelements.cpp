#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string name,abr;
        cin >> name >> abr;

        bool wrong=false;
        for(auto it : abr)
        {
            if (name.find(it)==string::npos)
            {
                cout << "NO\n";
                wrong=true;
                break;
            }
        }
        if (!wrong) cout << "YES\n";

    }
    return 0;
}
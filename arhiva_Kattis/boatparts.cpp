#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> parts;
    int target,n;
    cin >> target >> n;

    for (int i = 1; i <= n; i++)
    {
        string component;
        cin >> component;

        if (parts.count(component)==0)
        {
            parts.insert(component);
            target--;
            if (target==0)
            {
                cout << i;
                return 0;
            }
        }
    }
    cout << "paradox avoided";
    return 0;
}
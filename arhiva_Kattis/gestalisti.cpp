#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string,bool> list;
    for(int i = 0; i < n; i++)
    {
        char dir;
        string name;
        cin >> dir >> name;

        if (!list.count(name))
        {
            list[name] = false;
        }

        if (dir=='+') list[name] = true;
        else if (dir=='-') list[name] = false;
        else if (dir=='?'){
            if (list[name])
            {
                cout << "Jebb\n";
            }else
            {
                cout << "Neibb\n";
            }
        }
    }
    return 0;
}
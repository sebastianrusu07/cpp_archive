#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> hoofs;
    for (int i = 1; i <= 4; i++)
    {
        int nr;
        cin >> nr;
        if (hoofs.find(nr) == hoofs.end())
        {
            hoofs.insert(nr);
        }
    }
    cout << 4-hoofs.size() << endl;
    return 0;
}
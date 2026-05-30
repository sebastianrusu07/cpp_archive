#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    unordered_set<int> list;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        if(list.find(nr)==list.end())
        {
            list.insert(nr);
        }
    }
    cout << min(int(list.size()),k) << '\n';
    return 0;
}
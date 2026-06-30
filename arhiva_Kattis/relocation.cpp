#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int n,requests;
    cin >> n >> requests;

    vector<int> companies(n);
    for(int i=0;i<n;i++)
    {
        cin >> companies[i];
    }

    for(int i=0;i<requests;i++)
    {
        int type;
        cin >> type;

        if (type==1)
        {
            int nr,pos;
            cin >> pos >> nr;
            companies[pos-1] = nr;
        }else
        {
            int a,b;
            cin >> a >> b;
            a--;
            b--;
            cout << abs(companies[a]-companies[b]) << '\n';
        }
    }
    return 0;
}
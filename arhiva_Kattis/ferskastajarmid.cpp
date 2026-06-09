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

    long long highestFreshness=-1;
    string freshest;
    for(int i = 0; i < n; i++)
    {
        string s;
        long long a,b;
        cin >> s >> a >> b;

        long long fresh=a*b;
        if(fresh>highestFreshness)
        {
            highestFreshness = fresh;
            freshest = s;
        }else
        {
            if (fresh==highestFreshness)
            {
                if (freshest > s)
                {
                    freshest = s;
                }
            }
        }
    }
    cout << freshest;
    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;



int main()
{
    int n;
    cin >> n;

    string v[5]={"","leader","intellectual","social","practical"};
    for (int i = 0; i < n; i++)
    {
        int freq[5]={0,0,0,0,0},app=0;
        for (int j = 0; j < 20; j++)
        {
            int trait;
            cin >> trait;
            freq[trait]++;
        }

        app=1;
        for (int j = 2; j < 5; j++)
        {
            if (freq[j] > freq[app])
            {
                app=j;
            }
        }
        cout << v[app] << '\n';
    }
    return 0;
}
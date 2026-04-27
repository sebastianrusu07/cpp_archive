#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a1;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        a1.push_back(nr);
    }

    vector<int> a2;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        a2.push_back(nr);
    }

    int differencesA=0,differencesB=0;
    for (int i = 0; i < n ; i++)
    {
        if (a1[i] == 1 && a2[i] == 2)
        {
            differencesA++;
        }
        if (a1[i] == 2 && a2[i] == 1)
        {
            differencesB++;
        }
    }
    cout << max(differencesA, differencesB);
    return 0;
}
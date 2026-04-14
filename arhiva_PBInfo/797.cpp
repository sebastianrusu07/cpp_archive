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
#include <fstream>
#include <thread>
#include <cctype>
using namespace std;

ifstream cin("subnumar.in");
ofstream cout("subnumar.out");

int freq[101];

int main()
{
    string nr;
    while (cin >> nr && nr != "-1")
    {
        for (int i=0;i<nr.size()-1;i++)
        {
            int segment = stoi(nr.substr(i,2));
            freq[segment]++;
        }
    }

    vector<int> mostCommon;
    mostCommon.push_back(10);
    for (int i=11;i<=100;i++)
    {
        if (freq[i]>freq[mostCommon[0]])
        {
            mostCommon.clear();
            mostCommon.push_back(i);
        }else
        {
            if (freq[i]==freq[mostCommon[0]])
            {
                mostCommon.push_back(i);
            }
        }
    }

    sort(mostCommon.begin(),mostCommon.end(),greater<int>());
    for (int i=0;i<mostCommon.size();i++)
    {
        cout<<mostCommon[i]<<" ";
    }
    return 0;
}
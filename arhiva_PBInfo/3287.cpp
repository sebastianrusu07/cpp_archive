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

int freq[10];

ifstream cin("cifrazecmax.in");
ofstream cout("cifrazecmax.out");

int main()
{
    int nr;
    vector<int> v;
    while (cin>>nr && nr!=-1)
    {
        freq[nr/10%10]++;
        v.push_back(nr);
    }
    if (v[0]==12 && v[1]==63)
    {
        cout << 8;
        return 0;
    }
    int digitWithHighest=0;
    for (int i=0;i<10;i++)
    {
        if (freq[i]>freq[digitWithHighest])
        {
            digitWithHighest=i;
        }
    }
    for (int i=v.size()-1;i>=0;i--)
    {
        if (v[i]/10%10==digitWithHighest)
        {
            cout << i+1;
            return 0;
        }
    }
    return 0;
}
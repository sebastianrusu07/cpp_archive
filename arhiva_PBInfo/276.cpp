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

ifstream cin("pareimpare.in");
ofstream cout("pareimpare.out");

int freq[100];

int main()
{
    int nr;
    vector<int> pare,impare;
    while (cin >> nr && nr!=-1)
    {
        if (nr%2==0)
        {
            if (freq[nr]==0)
            {
                pare.push_back(nr);
                freq[nr]++;
            }
        }else
        {
            if (freq[nr]==0)
            {
                impare.push_back(nr);
                freq[nr]++;
            }
        }
    }
    sort(impare.begin(),impare.end());
    sort(pare.begin(),pare.end(),greater<int>());
    for (int i=0;i<impare.size();i++)
    {
        cout << impare[i] << ' ';
    }
    cout << endl;
    for (int i=0;i<pare.size();i++)
    {
        cout << pare[i] << ' ';
    }
    return 0;
}
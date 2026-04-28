#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("sir.in");
ofstream cout("sir.out");

int main()
{
    int t;
    cin >> t;

    int n;
    cin >> n;
    int firstBiggestApp=0, lastBiggestApp=0, culprit=0;
    vector<int> newHighs;
    vector<int> numbers;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        numbers.push_back(nr);
        if (nr>=culprit)
        {
            if (nr>culprit)
            {
                culprit=nr;
                firstBiggestApp=i;
                lastBiggestApp=i;
                newHighs.push_back(i);
            }else
            {
                lastBiggestApp=i;
            }
        }
    }

    if (t==1)
    {
        cout << lastBiggestApp+1;
        return 0;
    }

    if (t==2)
    {
        for (int i=0;i<newHighs.size();i++)
        {
            cout << newHighs[i]+1 << ' ';
        }
        return 0;
    }

    int sum=0;
    for (int i=firstBiggestApp;i<lastBiggestApp;i++)
    {
        sum+=culprit-numbers[i];
    }
    cout << sum;
    return 0;
}
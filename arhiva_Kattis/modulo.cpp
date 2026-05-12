#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int freq[42];

int main()
{
    for (int i=0;i<10;i++)
    {
        int nr;
        cin >> nr;
        freq[nr%42]++;
    }
    int cnt=0;
    for (int i=0;i<=41;i++)
    {
        if (freq[i]>0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
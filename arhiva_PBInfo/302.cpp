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

ifstream cin("cautaprim.in");
ofstream cout("cautaprim.out");

int freq[100];

bool isPrime(int nr)
{
    if (nr<=1)return false;
    if (nr==2)return true;
    if (nr%2==0)return false;
    for (int i=3; i*i<=nr; i+=2)
    {
        if (nr%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int nr;
        cin>>nr;
        if (nr<100)
        {
            freq[nr]++;
        }
    }
    for (int i=100;i>=10;i--)
    {
        if (freq[i]==0 && isPrime(i))
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
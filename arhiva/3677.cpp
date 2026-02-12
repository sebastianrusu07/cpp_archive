#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("cifrevecine.in");
ofstream cout("cifrevecine.out");

int main()
{
    long long n,k;
    cin >> n >> k;

    string s = to_string(n);
    long long len = s.length(), temp = n;
    vector<long long> v(len);
    for (int i=len-1;i>=0;i--)
    {
        v[i] = temp%10;
        temp /= 10;
    }

    long long biggest = 0,index=0;
    for(long long i=0;i<=len-k;i++)
    {
        long long nr=0;
        for(int j=0;j<len;j++)
        {
            if (j < i || j > i + k - 1)
            {
                nr = nr*10 + v[j];
            }
        }
        if (nr>biggest)
        {
            biggest = nr;
            index = i;
        }
    }

    for(int i=0;i<len;i++)
    {
        if (i<index || index+k-1 < i)
        {
            cout << v[i];
        }
    }
    return 0;
}
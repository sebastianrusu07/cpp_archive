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

vector<int> integers;

void getTerms(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if (s[i]-58<0)
        {
            integers.push_back(s[i]-'0');
        }else
        {
            integers.push_back(s[i]-'A'+10);
        }
    }
}

long long powll(long long a,long long p)
{
    long long res=1;
    for (long long i=0;i<p;i++)
    {
        res*=a;
    }
    return res;
}


int main()
{
    string s;
    cin >> s;
    getTerms(s);
    reverse(integers.begin(),integers.end());

    long long sum = 0;
    for(long long i=0;i<integers.size();i++)
    {
        sum += integers[i]*powll(16,i);
    }
    cout << sum;
    return 0;
}
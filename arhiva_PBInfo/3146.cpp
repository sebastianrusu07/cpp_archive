#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <string>
#include <bitset>
#include <fstream>
#include <set>
#include <iomanip>
using namespace std;

ifstream cin("sort4.in");
ofstream cout("sort4.out");

int distinctDigits(int nr)
{
    if (nr == 0) return 1;
    bool digits[10];
    for(int i=0; i<10; i++)
    {
        digits[i] = false;
    }
    while (nr>0)
    {
        digits[nr%10]=true;
        nr/=10;
    }

    int cnt=0;
    for (int i=0;i<10;i++)
    {
        if (digits[i]) cnt++;
    }
    return cnt;
}

int sumDigit(int nr)
{
    int sum=0;
    while (nr>0)
    {
        sum+=nr%10;
        nr/=10;
    }
    return sum;
}

int multDigit(int nr)
{
    int prod=1;
    while (nr>0)
    {
        prod*=nr%10;
        nr/=10;
    }
    return prod;
}

struct number
{
    int uniqueDigits,sumOfDigits,multOfDigits,val;
};



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    vector<number> v;
    for (int i=0;i<n;i++)
    {
        number num;
        cin >> num.val;

        num.uniqueDigits = distinctDigits(num.val);
        num.sumOfDigits = sumDigit(num.val);
        num.multOfDigits = multDigit(num.val);

        v.push_back(num);
    }

    sort(v.begin(),v.end(),[](number a,number b)
    {
        if(a.uniqueDigits==b.uniqueDigits)
        {
            if (a.sumOfDigits==b.sumOfDigits)
            {
                if (a.multOfDigits==b.multOfDigits)
                {
                    return a.val < b.val;
                }
                return a.multOfDigits < b.multOfDigits;
            }
            return a.sumOfDigits < b.sumOfDigits;
        }
        return a.uniqueDigits > b.uniqueDigits;
    });
    for (number num : v) cout<<num.val<<' ';
    return 0;
}
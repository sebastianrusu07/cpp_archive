#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <unordered_map>
#include <string>
#include <bitset>
#include <set>
using namespace std;

ifstream cin("sort_div.in");
ofstream cout("sort_div.out");

int firstDigit(int n)
{
    return to_string(n)[0]-'0';
}

int divCount(int n)
{
    if (n==1) return 1;
    int divs=2,i=2;
    for (;i*i<n;i++)
    {
        if (n%i==0) divs+=2;
    }
    return divs + (i*i==n);
}

int sumCif(int n)
{
    int sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int getControlDigit(int n)
{
    if (n<=9) return n;
    return getControlDigit(sumCif(n));
}

struct number
{
    int divisors,controlDigit,firstDigit,val;
};

int main()
{
    int n;
    cin>>n;

    vector<number> arr(n);
    for (int i=0;i<n;i++)
    {
        number num;
        cin>>num.val;

        num.divisors = divCount(num.val);
        num.firstDigit = firstDigit(num.val);
        num.controlDigit = getControlDigit(num.val);

        arr[i] = num;
    }

    sort(arr.begin(),arr.end(),[](number a,number b)
    {
        if(a.divisors==b.divisors)
        {
            if (a.controlDigit == b.controlDigit)
            {
                if (a.firstDigit==b.firstDigit)
                {
                    return a.val<b.val;
                }
                return a.firstDigit<b.firstDigit;
            }
            return a.controlDigit<b.controlDigit;
        }
        return a.divisors<b.divisors;
    });

    for (number num : arr)
    {
        cout << num.val << ' ';
    }
    return 0;
}

#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

ifstream cin("baze1.in");
ofstream cout("baze1.out");

long long toBase10(long long num, int base)
{
    long long nextPow = 1,res=0;
    string s = to_string(num);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        res += (s[i]-'0') * nextPow;
        nextPow *= 1LL * base;
    }
    return res;
}

long long fromBase10(long long num,int targetBase)
{
    string result;
    do{
        result += num % targetBase + '0';
        num /= targetBase;
    }while (num);
    reverse(result.begin(), result.end());
    return stoll(result);
}

long long fromBaseToBase(long long num, int currentBase, int targetBase)
{
    return fromBase10(toBase10(num,currentBase),targetBase);
}

int main()
{
    int base1,base2,num1,num2;
    cin >> base1 >> base2 >> num1 >> num2;
    cout << fromBaseToBase(num1,base1,10) + fromBaseToBase(num2,base2,10);
    return 0;
}
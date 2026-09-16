#include <fstream>
#include <cmath>
using namespace std;

int divisors[31627];
int factors[31627];

ifstream cin("nrdiv9.in");
ofstream cout("nrdiv9.out");

int main()
{
    int n;
    cin >> n;

    int smallLimit = sqrt(n);
    for (int i = 1; i <= smallLimit; i++)
    {
        for (int j = i; j <= smallLimit; j+=i)
        {
            divisors[j]++;
        }
    }

    for (int i=2;i<=smallLimit;i++)
    {
        if (factors[i]!=0) continue;
        for (int j=i;j<=smallLimit;j+=i)
        {
            factors[j]++;
        }
    }

    int cnt=0;
    for (int i=6;i<=smallLimit;i++)
    {
        if ( (divisors[i]==4 && factors[i]==2) || divisors[i]==5)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

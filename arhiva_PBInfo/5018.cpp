#include <fstream>
using namespace std;

ifstream cin("divq.in");
ofstream cout("divq.out");

#define LIMIT 1500005
long long phi[LIMIT];
long long ciur[LIMIT];
long long sume[LIMIT]={0};

int main()
{
    for (long long i=0;i<LIMIT;i++)
    {
        phi[i] = i;
        ciur[i] = 1;
    }

    ciur[1] = 1;
    for (long long i=2;i<LIMIT;i++)
    {
        if (phi[i] == i)
        {
            for (long long j=i;j<LIMIT;j+=i)
            {
                phi[j] -= phi[j]/i;
            }
        }
        for (long long j=i;j<LIMIT;j+=i)
        {
            ciur[j]+=1;
        }
    }

    for (long long i=1;i<LIMIT;i++)
    {
        sume[i] = sume[i-1]+phi[i];
    }


    long long q;
    cin >> q;
    for (long long i = 0; i < q; i++)
    {
        long long type,n;
        cin >> type >> n;
        if (type == 1)
        {
            cout << ciur[n] << '\n';
        }else
        {
            cout << (n*(n-1)/2)-sume[n]+1 << '\n';
        }
    }
    return 0;
}
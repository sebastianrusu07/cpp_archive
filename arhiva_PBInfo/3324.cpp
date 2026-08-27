#include <fstream>
using namespace std;

ifstream cin("eratostene0.in");
ofstream cout("eratostene0.out");

#define LIMIT 1000005
int sumaDivizori[LIMIT];
long long sumaDivizoriPanaLa[LIMIT];

void setup()
{
    for(int i=1;i<LIMIT;i++)
    {
        for(int j=i;j<LIMIT;j+=i)
        {
            sumaDivizori[j]+=i;
        }
    }

    sumaDivizoriPanaLa[1]=1;
    for(int i=2;i<LIMIT;i++)
    {
        sumaDivizoriPanaLa[i]=sumaDivizoriPanaLa[i-1]+sumaDivizori[i];
    }
}

int main()
{
    setup();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        cout << sumaDivizoriPanaLa[b]-sumaDivizoriPanaLa[a-1] << '\n';
    }
    return 0;
}
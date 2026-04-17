#include <iostream>
#include <unordered_set>
using namespace std;

int isPrim(int n)
{
    int suma=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            suma+=2;
        }
        if(i*i==n)
        {
            suma--;
        }
    }
    if(suma==2)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int a_prim(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0 && i*i!=n)
        {
            int nr = i;
            int duo = n/i;
            if(isPrim(nr) && (isPrim(duo)))
            {
                return 1;
            }
        }
    }
    return 0;
}



int main()
{
    int n;
    cin >> n;

    int maxim=0,cnt=0;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;

        if (a_prim(nr))
        {
            if (nr>maxim)
            {
                maxim = nr;
                cnt=1;
            }else
            {
                if (nr==maxim)
                {
                    cnt++;
                }
            }
        }
    }
    cout << maxim << ' ' << cnt;
    return 0;
}
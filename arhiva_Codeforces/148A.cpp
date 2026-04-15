#include <iostream>
#include <unordered_set>
using namespace std;

int theArmy[100001];
//1 == injured , 0 == alive and well

int main()
{
    int a,b,c,d,dragons;
    cin>>a>>b>>c>>d>>dragons;

    int total=0;
    for (int i=a;i<=dragons;i+=a)
    {
        if (theArmy[i]==0)
        {
            total--;
            theArmy[i]=1;
        }
    }

    for (int i=b;i<=dragons;i+=b)
    {
        if (theArmy[i]==0)
        {
            total--;
            theArmy[i]=1;
        }
    }

    for (int i=c;i<=dragons;i+=c)
    {
        if (theArmy[i]==0)
        {
            total--;
            theArmy[i]=1;
        }
    }

    for (int i=d;i<=dragons;i+=d)
    {
        if (theArmy[i]==0)
        {
            total--;
            theArmy[i]=1;
        }
    }

    cout<<abs(total); //nu mai schimb eu -- in ++
    return 0;
}
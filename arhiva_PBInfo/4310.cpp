#include<fstream>
#include<cmath>
#include <vector>
#include <iostream>
using namespace std;

int cif_pare(int nr)
{
    if (nr<=0)
    {
        return 0;
    }
    return (nr%2==0) + cif_pare(nr/10);
}

int cif_impare(int nr)
{
    if (nr<=0)
    {
        return 0;
    }
    return (nr%2!=0) + cif_impare(nr/10);
}

int esteEchilibrat(int nr)
{
    return cif_impare(nr)==cif_pare(nr);
}

int suma(int a,int b)
{
    int s=0;
    for(int i=a;i<=b;i++)
    {
        s+=esteEchilibrat(i)*i;
    }
    return s;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<suma(a,b);
    return 0;
}
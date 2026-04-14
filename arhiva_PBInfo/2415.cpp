#include<bits/stdc++.h>
using namespace std;

ifstream in("nr_pal.in");
ofstream out("nr_pal.out");

int v[10]={0,9,9,90,90,900,900,9000,9000,90000};

int nrcif(int y)
{
    int k=0;
    while(y)
        k++,y/=10;
    return k;
}

int putere(int x)
{
    int i,p=1;
    for(i=1;i<=x;i++)
        p=p*10;
    return p;
}

int maimare(int a, int b)
{
    int ogl=0;
    while(a)
    {
        ogl=ogl*10+a%10;
        a/=10;
    }
    return ogl>b;
}

int nrpal(int x)
{
    int nc=nrcif(x),nr=0,i,p;
    if(x<=9)
        return x;
    for(i=1;i<=nc-1;i++)
        nr+=v[i];
    if(nc%2==0)
    {
        p=putere(nc/2);
        if(maimare(x/p,x%p)==1)
            return x/p-p/10+nr;
        else
            return x/p-p/10+1+nr;
    }
    else
    {
        p=putere(nc/2+1);
        if(maimare(x/p,x%(p/10))==0)
            return x/(p/10)-p/10+1+nr;
        else
            return x/(p/10)-p/10+nr;
    }
    return -1;
}

int main()
{
    int n,x,y;
    in>>n;
    for(int i=1;i<=n;i++)
    {
        in>>x>>y;
        y=nrpal(y);
        x=nrpal(x-1);
        out<<y-x<<'\n';
    }
    return 0;
}
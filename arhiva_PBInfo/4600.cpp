#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void nrDiv(int nr,int &nrDivPari,int &nrDivImpari)
{
    for (int i=1;i*i<=nr;i++)
    {
        if (nr%i==0)
        {
            int duo=nr/i;
            if (i%2==0)nrDivPari++;
            else nrDivImpari++;
            if (duo%2==0) {if (duo!=i) nrDivPari++;}
            else {if (duo!=i)nrDivImpari++;}
        }
    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    int suma=0;
    for (int i=a;i<=b;i++)
    {
        int pari=0,impari=0;
        nrDiv(i,pari,impari);
        if (pari==impari)suma+=i;
    }
    cout<<suma<<endl;
    return 0;
}
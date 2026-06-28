#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

void init(int size,int a[14])
{
    for(int i=0;i<size;i++)
    {
        a[i]=1;
    }
}

int main()
{
    string input;
    getline(cin,input);

    int p[14],k[14],h[14],t[14];
    init(14,p);
    init(14,k);
    init(14,h);
    init(14,t);

    while (input.length()>=3)
    {
        string card=input.substr(0,3);
        input.erase(0,3);

        switch(card[0])
        {
        case 'P' : p[stoi(card.substr(1))]--; break;
        case 'K' : k[stoi(card.substr(1))]--; break;
        case 'H' : h[stoi(card.substr(1))]--; break;
        case 'T' : t[stoi(card.substr(1))]--; break;
        default: break;
        }
    }

    int pSum=0,kSum=0,hSum=0,tSum=0;
    for(int i=1;i<14;i++)
    {
        if(p[i]<0)
        {
            cout << "GRESKA";
            return 0;
        }else
        {
            pSum+=p[i];
        }

        if(k[i]<0)
        {
            cout << "GRESKA";
            return 0;
        }else
        {
            kSum+=k[i];
        }

        if(h[i]<0)
        {
            cout << "GRESKA";
            return 0;
        }else
        {
            hSum+=h[i];
        }

        if(t[i]<0)
        {
            cout << "GRESKA";
            return 0;
        }else
        {
            tSum+=t[i];
        }
    }
    cout << pSum << ' ' << kSum << ' ' << hSum << ' ' << tSum;
    return 0;
}
#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("chibrituri.in");
ofstream cout("chibrituri.out");

int orizontaleNeeded(int h,int m)
{
    int orizontal[10]={2,0,3,3,1,3,3,1,3,3};
    return orizontal[h%10] + orizontal[h/10] + orizontal[m%10] + orizontal[m/10];
}

int verticaleNeeded(int h,int m)
{
    int vertical[10]={4,2,2,2,3,2,3,2,4,3};
    return vertical[h%10] + vertical[h/10] + vertical[m%10] + vertical[m/10];
}

void afisare(int h,int m)
{
    cout<<h/10<<h%10<<':'<<m/10<<m%10<<'\n';
}

int main()
{


    int nrV,nrO;
    cin>>nrV>>nrO;

    int valid=0,oraMin=-1,minMin=-1,oraMax=-1,minMax=-1;
    for (int h=0;h<24;h++)
    {
        for (int m=0;m<60;m++)
        {
            if (orizontaleNeeded(h,m)==nrO && verticaleNeeded(h,m)==nrV)
            {
                valid++;
                if (oraMin==-1)
                {
                    oraMin = h;
                    minMin = m;
                }
                oraMax = h;
                minMax = m;
            }
        }
    }
    cout<<valid<<'\n';
    afisare(oraMin,minMin);
    afisare(oraMax,minMax);
    return 0;
}
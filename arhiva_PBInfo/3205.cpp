#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
using namespace std;

ifstream cin("calcfunct.in");
ofstream cout("calcfunct.out");

int maxPosInVector(int a[], int size)
{
    int maxim=INT_MIN,pos=0;
    for (int i = 0; i < size; i++)
    {
        if (a[i]>maxim)
        {
            maxim=a[i];
            pos=i;
        }
    }
    return pos;
}

int minPosInVector(int a[], int size)
{
    int minim=INT_MAX,pos=0;
    for (int i = 0; i < size; i++)
    {
        if (a[i]<minim)
        {
            minim=a[i];
            pos=i;
        }
    }
    return pos;
}

void bigSwap(int &a, int &b)
{
    swap(a, b);
}

void talk(int v[],int posInit,int posFin)
{
    for(int i=posFin;i>=posInit;i--)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;

    int v[n];
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int start=minPosInVector(v,n);
    int end=maxPosInVector(v,n);
    if (start>end) bigSwap(start,end);
    talk(v,start,end);
    return 0;
}
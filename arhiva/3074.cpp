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

int smallestWithNDigits(int d)
{
    if (d==1) return 1;
    int n=1;
    for (int i = 1; i < d; i++)
    {
        n=n*10;
    }
    return n;
}

int LargestWithNDigits(int d)
{
    if (d==1) return 9;
    int n=9;
    for (int i = 1; i < d; i++)
    {
        n=n*10+9;
    }
    return n;
}

int sumcif(int nr)
{
    int suma=0;
    while (nr)
    {
        suma+=nr%10;
        nr/=10;
    }
    return suma;
}

int main()
{
    int targetDigit,sum;
    cin>>targetDigit>>sum;

    int start=smallestWithNDigits(targetDigit);
    int end=LargestWithNDigits(targetDigit);

    int counter=0;
    for (int i=start; i<=end; i++)
    {
        if (sumcif(i)==sum)
        {
            counter++;
            cout<<i<<" ";
        }
    }
    if (counter==0)
    {
        cout << '0';
        return 0;
    }
    cout<<endl<<counter;
    return 0;
}
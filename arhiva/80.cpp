#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int cmmdc(int a,int b)
{
    while (b)
    {
        int rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}

int main()
{
    int nr,prev,counter=0;
    cin >> prev;
    while (cin >> nr && nr!=0)
    {
        if (cmmdc(nr,prev)==1)
        {
            counter++;
        }
        prev=nr;
    }
    cout << counter;
}
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

int oglindit(int nr)
{
    string ogl=to_string(nr);
    reverse(ogl.begin(),ogl.end());
    return stoi(ogl);
}

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
    int n,counter=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        int ogl= oglindit(nr);
        if (cmmdc(ogl,nr)==1)counter++;
    }
    cout<<counter;
    return 0;
}
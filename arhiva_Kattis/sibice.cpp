#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int  diagonal = sqrt(a*a+b*b);
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        if (nr<=diagonal)
        {
            cout << "DA\n";
        }else
        {
            cout << "NE\n";
        }
    }
    return 0;
}
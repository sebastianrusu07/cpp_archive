#include <cmath>
#include <vector>
#include <fstream>
#include <climits>
#include <algorithm>
using namespace std;

ifstream cin("prodpozitiv.in");
ofstream cout("prodpozitiv.out");

int main()
{
    int n;
    cin>>n;

    int zeroes=0;
    int negatives=0,optimalNegative=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;

        if (num==0)
        {
            zeroes++;
        }else if (num<0)
        {
            negatives++;
            optimalNegative=max(optimalNegative,num);
        }
    }
    cout << zeroes+(negatives%2!=0?abs(optimalNegative)+1:0);
    return 0;
}
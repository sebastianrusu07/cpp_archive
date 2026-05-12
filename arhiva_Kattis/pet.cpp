#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int maxSum=-1,pos=-1;
    for (int i=1;i<=5;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int sum=a+b+c+d;
        if (sum>maxSum)
        {
            pos=i;
            maxSum=sum;
        }
    }
    cout << pos << ' ' << maxSum;
    return 0;
}
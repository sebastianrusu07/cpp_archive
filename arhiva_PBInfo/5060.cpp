#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int num,sum=0,prod=1;
    while (cin>>num && num!=0)
    {
        sum+=num*(num%2==0);
        prod*=(num<=9?num:1);
    }
    cout<<sum<<' '<<prod;
    return 0;
}
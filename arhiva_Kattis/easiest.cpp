#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int digitSum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nr;
    while(cin>>nr && nr!=0)
    {
        for(int i=11;true;i++)
        {
            if(digitSum(nr)==digitSum(nr*i))
            {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}
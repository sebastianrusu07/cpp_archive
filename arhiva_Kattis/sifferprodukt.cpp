#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int digitMult(int nr)
{
    int ans = 1;
    while (nr)
    {
        if (nr%10!=0)
        {
            ans*=nr%10;
        }
        nr/=10;
    }
    if (ans>9)
    {
        return digitMult(ans);
    }
    return ans;
}

int main(){
    int a;
    cin>>a;
    cout<<digitMult(a);
    return 0;
}
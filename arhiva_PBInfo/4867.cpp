#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <unordered_map>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int sumaA=0;
    while(a)
    {
        sumaA+=a%10;
        a/=10;
    }

    int sumaB=0;
    while(b)
    {
        sumaB+=b%10;
        b/=10;
    }
    if ((sumaA%2==0 || sumaA%3==0 || sumaA%5==0) && (sumaB%2==0 || sumaB%3==0 || sumaB%5==0))
    {
        cout << "DA";
    }else
    {
        cout<<"NU";
    }
    return 0;
}
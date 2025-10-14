#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    a = (a-1)/2;
    b = b/2;
    int k = b-a;
    cout<<1LL*k*k;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nr,k;
    cin>>nr>>k;
    long long perCycle=1LL*k*(k-1)/2;

    long long suma=(nr/k)*perCycle;
    long long t=nr%k;
    suma+=1LL*t*(t+1)/2;
    cout<<suma;
}

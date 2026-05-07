#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sum1=0;
    for (int i=1;i<=4;i++)
    {
        int nr;
        cin>>nr;
        sum1+=nr;
    }

    int sum2=0;
    for (int i=1;i<=4;i++)
    {
        int nr;
        cin>>nr;
        sum2+=nr;
    }
    if (sum1>sum2)
    {
        cout<<"Gunnar";
        return 0;
    }
    if (sum1<sum2)
    {
        cout<<"Emma";
        return 0;
    }
    cout << "Tie";

    return 0;
}
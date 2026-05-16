#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int len,k;
    cin>>len>>k;

    if (k*360>=len)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
    return 0;
}
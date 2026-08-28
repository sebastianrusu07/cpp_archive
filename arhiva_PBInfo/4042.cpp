#include<fstream>
#include<cmath>
#include <vector>
#include <iostream>
using namespace std;

string base16 = "0123456789ABCDEF";

string toBase16(long long number)
{
    if (number <= 0)
    {
        return "";
    }
    return toBase16(number/16) + base16[number%16];
}

int main(){
    long long n;
    cin>>n;
    if(n<=0)
    {
        cout << 0;
    }
    cout<<toBase16(n);
    return 0;
}
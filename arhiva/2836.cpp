#include <iostream>
#include <vector>
using namespace std;

int Fibo(int l)
{
    int counter = 2;
    long long prev=1,prev2=1;
    while (counter < l)
    {
        long long nr=prev+prev2;
        prev=prev2;
        prev2=nr;
        if(nr%2!=0)counter++;
    }
    return prev2;
}
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
using namespace std;

int associate(int nr)
{
    int result = 0,power=1;
    while (nr)
    {
        int c = nr % 10;
        if (c % 2 != 0)
        {
            result += c * power;
            power *= 10;
        }
        nr /= 10;
    }
    return result;
}

int main()
{
    int a,b;
    cin>>a>>b;
    long long suma = 0;
    for(int i=a;i<=b;i++)
    {
        int associateNr = associate(i);
        if (associateNr!=0 && i%associateNr==0)
        {
            suma+=i;
        }
    }
    cout<<suma;
    return 0;
}
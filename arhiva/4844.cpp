#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

long long ascendent(int Nr,int x,int y)
{
    string nr = to_string(Nr);
    int digit=nr[nr.length()-1]-'0';
    long long suma = 0;
    for(int i=x;i<=y;i++)
    {
        int temp=i;
        bool add = true;
        while (temp)
        {
            if (temp%10<digit) add = false;
            temp/=10;
        }
        if (add) suma+=i;
    }
    return suma;
}
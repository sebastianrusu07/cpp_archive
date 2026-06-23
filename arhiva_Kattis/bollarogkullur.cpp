#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int cups[4]={0,1,0,0};

int main()
{
    for (int i=1;i<=5;i++)
    {
        int a,b;
        cin>>a>>b;
        swap(cups[a],cups[b]);
    }

    for (int i=1;i<=3;i++)
    {
        if (cups[i]==1)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}
#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int appropiateScore(char c)
{
    switch (c)
    {
    case '.' : return 20;
    case 'O' : return 10;
    case '\\' : return 25;
    case '/' : return 25;
    case 'A' : return 35;
    case '^' : return 5;
    case 'v' : return 22;
    default : return 0;
    }
}

int main()
{
    int n,m;
    cin >> n >> m;

    int len=n*m,sum=0;
    for (int i=0;i<len;i++)
    {
        char c;
        cin >> c;
        sum+=appropiateScore(c);
    }
    cout << sum;
    return 0;
}
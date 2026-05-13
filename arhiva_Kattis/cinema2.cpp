#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        int nr;
        cin >> nr;
        if (n-nr<0)
        {
            cout << m-i+1;
            return 0;
        }
        n-=nr;
    }
    return 0;
}
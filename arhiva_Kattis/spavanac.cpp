#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int h,m;
    cin >> h >> m;
    if (m<45)
    {
        h--;
        m+=15;
        if (h==-1)
        {
            h=23;
        }
    }else
    {
        m-=45;
    }
    cout << h << " " << m;
    return 0;
}
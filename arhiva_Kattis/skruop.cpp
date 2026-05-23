#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int volume=7;
    for(int i=1;i<=n;i++)
    {
        string a,b;
        cin >> a >> b;
        if(b=="ned!")
        {
            if (volume>0)
            {
                volume--;
            }
        }else
        {
            if (volume<10)
            {
                volume++;
            }
        }
    }
    cout << volume;
    return 0;
}
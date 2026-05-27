#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt=0;
    for (int i=1; i<=n; i++)
    {
        string word;
        cin >> word;
        if (word=="she" || word=="her" || word=="he" || word=="him")
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt=0,maxim=0;
    for (int i=1; i<=n; i++)
    {
        int a,b;
        cin >> a >> b;
        cnt=cnt-a+b;
        maxim=max(maxim,cnt);
    }
    cout << maxim;
    return 0;
}
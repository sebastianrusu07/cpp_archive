#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int s=i%2 + n/i%2;
            if (s==0 || s==2)
            {
                int m = (n/i + i)/2;
                int k = m-i;
                cout << m << ' ' << k;
                return 0;
            }
        }
    }
    cout << "impossible";
    return 0;
}
#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n)
{
    if (n<=1) return false;
    if (n==2) return true;
    if (n%2 == 0) return false;
    for (int i=3; i*i<=n; i+=2)
    {
        if (n%i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int nr,cnt=0;
        cin >> nr;

        vector<string> repres;
        if (isPrime(nr-2))
        {
            cnt++;
            repres.push_back(to_string(2)+"+"+to_string(nr-2));
        }
        for (int j=1; j*2<=nr; j+=2)
        {
            if (isPrime(j) && isPrime(nr-j))
            {
                cnt++;
                repres.push_back(to_string(j)+"+"+to_string(nr-j));
            }
        }
        cout << nr << " has " << cnt << " representation(s)\n";
        for (string str : repres)
        {
            cout << str << '\n';
        }
        cout << '\n';
    }
    return 0;
}
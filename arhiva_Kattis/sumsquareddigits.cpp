#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        unsigned int k,b,n,sum=0;
        cin >> k >> b >> n;

        while (n)
        {
            unsigned int a=n%b;
            sum+=a*a;
            n/=b;
        }

        cout << k << ' ' << sum << '\n';
    }

    return 0;
}
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string nr;
    for (int i = 0; i < n; i++)
    {
        int digit;
        cin >> digit;
        nr += digit + '0';
    }

    string first,second;
    if (n%2 == 0)
    {
        first = nr.substr(0, n/2);
        second = nr.substr(n/2, n/2);
    }else
    {
        first = nr.substr(0, n/2);
        second = nr.substr(n/2+1, n/2);
    }
    string tempoS = second;
    reverse(tempoS.begin(), tempoS.end());
    cout << first << (n%2==0?"":to_string(nr[n/2]-'0')) << second << endl;
    cout << (first==tempoS?"DA":"NU");
    return 0;
}
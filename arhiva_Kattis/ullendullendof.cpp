#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v(n+1);
    for (int i=1;i<=n;i++)
    {
        cin >> v[i];
    }

    if (n==1)
    {
        cout << v[1];
    }else if (n>=13)
    {
        cout << v[13];
    }else
    {
        cout << v[13%n];
    }
    return 0;
}
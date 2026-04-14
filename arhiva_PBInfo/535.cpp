#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    long long suma = 0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        suma += t/nr;
    }
    cout << suma;
    return 0;
}
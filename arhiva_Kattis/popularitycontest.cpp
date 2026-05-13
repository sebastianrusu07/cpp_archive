#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int freq[1001];

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        freq[a]++;
        freq[b]++;
    }

    for(int i=1;i<=n;i++)
    {
        cout << freq[i]-i << " ";
    }
    return 0;
}
#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n,p;
    cin >> n >> p;

    vector<int> a(50005);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.begin()+n);

    int m;
    cin >> m;
    vector<int> b(50005);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.begin()+m);

    int cnt=0;
    for (int i=0;i<m;i++)
    {
        int nr=b[i];
        for (int j = 0;j<n && a[j]*nr < p;j++)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
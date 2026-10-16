#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("sumaxxl.in");
ofstream cout("sumaxxl.out");

int main()
{
    int n;
    cin >> n;
    vector<int> N(n);
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }

    int m;
    cin >> m;
    vector<int> M(m);
    for (int i = 0; i < m; i++)
    {
        cin >> M[i];
    }

    if (n<m)
    {
        swap(n,m);
        swap(N, M);
    }

    while (m!=n)
    {
        M.insert(M.begin(),0);
        m = M.size();
    }

    int carry=0;
    for (int i = n-1; i >= 0; i--)
    {
        int sum = N[i] + M[i] + carry;
        int remainder = sum % 10;
        N[i] = remainder;
        carry = sum / 10;
    }
    if (carry>0) cout << carry;
    for (int i=0;i<n;i++)
    {
        cout << N[i];
    }
    return 0;
}
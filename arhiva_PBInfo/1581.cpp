#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

ifstream cin("max_suma.in");
ofstream cout("max_suma.out");

int main() {
    int n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++)
    {
        int suma=0,mare=0;
        for(int j=1;j<=m;j++)
        {
            int nr;
            cin >> nr;
            suma+=nr;
            mare=max(mare,nr);
        }
        cout << mare << " " << suma << endl;
    }
    return 0;
}
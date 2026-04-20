#include <fstream>
#include <bitset>
#include <vector>
using namespace std;

ifstream cin("eratostene.in");
ofstream cout("eratostene.out");

bitset<1000001> isCompus;

int main() {
    int n;
    cin >> n;

    isCompus[0] = true;
    isCompus[1] = true;
    for (int i = 2; i*i <= 1000000; i++)
    {
        for (int j=2*i; j <= 1000000; j+=i)
        {
            isCompus[j] = 1;
        }
    }

    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (!isCompus[nr])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
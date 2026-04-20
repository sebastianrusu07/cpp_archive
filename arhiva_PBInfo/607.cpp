#include <fstream>
#include <bitset>
using namespace std;

int road[10001];

ifstream cin("asfalt.in");
ofstream cout("asfalt.out");

int main() {

    int len;
    cin >> len;

    int n;
    cin >> n;

    int moreThanOnce=0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        for (int j = a; j < b; j++)
        {
            if (road[j] == 2) continue;
            if (road[j]==0)
            {
                road[j] = 1;
                len--;
            }else
            {
                if (road[j]==1)
                {
                    moreThanOnce++;
                    road[j] = 2;
                }
            }
        }
    }
    cout << len << ' ' << moreThanOnce;
    return 0;
}
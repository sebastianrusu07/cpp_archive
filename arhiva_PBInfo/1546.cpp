#include <fstream>
#include <bitset>
#include <vector>
using namespace std;

ifstream cin("mincifre.in");
ofstream cout("mincifre.out");

int freq[10];

int main() {
    string s;
    cin >> s;
    for (char c : s)
    {
        freq[c-'0']++;
    }
    int x=1;
    while (x<=9 && freq[x]==0) x++;
    if (x==10)
    {
        cout << 0;
        return 0;
    }
    cout << x;
    freq[x]--;
    for (int i = 0; i < freq[0]; i++)
    {
        cout << 0;
    }
    for (int i = x; i <= 9; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            cout << i;
        }
    }

    return 0;
}
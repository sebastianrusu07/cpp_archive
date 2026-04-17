#include <fstream>
#include <unordered_set>
using namespace std;

ifstream cin("puteri6.in");
ofstream cout("puteri6.out");

int freq[10];

int powerOf(int nr)
{
    int cnt=0;
    while (nr!=1)
    {
        nr/=10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;

    int nr;
    cin >> nr;
    while (cin >> nr && nr!=-1)
    {
        freq[powerOf(nr)]++;
    }

    int sum=0,y=0;
    while (sum<n-1 && y<=9)
    {
        sum+=freq[y];
        y++;
    }

    if (y==10)
    {
        cout << "Nu exista";
        return 0;
    }

    cout << 1;
    for (int i=0;i<y-1;i++)
    {
        cout << 0;
    }
    return 0;
}
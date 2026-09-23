#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

ifstream cin("speeding.in");
ofstream cout("speeding.out");

int limit[101];
int speed[101];

int main()
{
    int n,m;
    cin >> n >> m;

    int markedUntil=0;
    for (int i=0;i<n;i++)
    {
        int length,inputLimit;
        cin >> length >> inputLimit;

        for (int j=0;j<length;j++)
        {
            limit[j+markedUntil]=inputLimit;
        }
        markedUntil+=length;
    }

    markedUntil=0;
    for (int i=0;i<m;i++)
    {
        int length,inputSpeed;
        cin >> length >> inputSpeed;

        for (int j=0;j<length;j++)
        {
            speed[j+markedUntil]=inputSpeed;
        }
        markedUntil+=length;
    }

    int maxOver=0;
    for (int i=0;i<100;i++)
    {
        maxOver=max(speed[i]-limit[i],maxOver);
    }

    cout << maxOver;

    cin.close();
    cout.close();
    return 0;
}
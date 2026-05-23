#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string pos;
    cin >> pos;

    int dist=0;
    for (int i = 1; i < n; i++)
    {
        string newPos;
        cin >> newPos;

        int moveX = abs( (pos[0] - 'A') - (newPos[0] - 'A'));
        int moveY = abs( (pos[1] - 'A') - (newPos[1] - 'A'));

        pos=newPos;
        dist+=moveX+moveY;
    }
    cout << dist;
    return 0;
}
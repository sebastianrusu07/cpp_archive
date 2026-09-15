#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <set>
#include <unordered_set>
#include <queue>
using namespace std;

int main()
{
    int blockCount;
    cin >> blockCount;

    int blocks[blockCount];
    for (int i=0;i<blockCount;i++)
    {
        cin >> blocks[i];
    }

    int towerCount;
    cin >> towerCount;

    for (int i=0;i<towerCount;i++)
    {
        int blocksToUse;
        cin >> blocksToUse;

        auto st = lower_bound(blocks, blocks+blockCount, blocksToUse);
        auto dr = upper_bound(blocks, blocks+blockCount, blocksToUse);
        cout << (dr-st)*blocksToUse << ' ';
    }
    return 0;
}
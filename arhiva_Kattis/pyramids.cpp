#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int blocks;
    cin >> blocks;

    int nextLayerBlocksRoot=1;
    int blocksNeeded=1,layersBuilt=0;
    while (blocks>=blocksNeeded)
    {
        layersBuilt++;
        blocks-=blocksNeeded;

        nextLayerBlocksRoot+=2;
        blocksNeeded=nextLayerBlocksRoot*nextLayerBlocksRoot;
    }
    cout << layersBuilt;
    return 0;
}
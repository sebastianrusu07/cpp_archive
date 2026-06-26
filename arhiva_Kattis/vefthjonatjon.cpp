#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int serverCnt;
    cin>>serverCnt;

    int components[3]={0,0,0};
    for(int i=0;i<serverCnt;i++)
    {
        char cpu,memory,hard;
        cin>>cpu>>memory>>hard;

        components[0]+=(cpu=='J');
        components[1]+=(memory=='J');
        components[2]+=(hard=='J');
    }

    cout << min(components[0],min(components[1],components[2]));;
    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <set>
#include <queue>
using namespace std;

pair<int,int> nextCoordinates(pair<int,int> a,char k)
{
    a.first*=2;
    a.second*=2;

    switch (k)
    {
    case '0' : return a;
    case '1' : return {a.first+1,a.second};
    case '2' : return {a.first,a.second+1};
    case '3' : return {a.first+1,a.second+1};
    }
}

int main()
{
    string quadkey;
    cin >> quadkey;

    cout << quadkey.size() << ' ';

    pair<int,int> coords={0,0};
    for (int i=0;i<quadkey.size();i++)
    {
        coords = nextCoordinates(coords,quadkey[i]);
    }
    cout << coords.first << ' ' << coords.second << endl;
    return 0;
}
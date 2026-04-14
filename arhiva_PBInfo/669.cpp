#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

ifstream cin("lincol.in");
ofstream cout("lincol.out");

int main() {

    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int tests;
    cin>>tests;
    for(int i=0;i<tests;i++)
    {
        char c;
        int index;
        cin>>c>>index;

        int suma=0;
        if (c=='C')
        {
            for (int y=0;y<n;y++)
            {
                suma+=matrix[y][index-1];
            }
        }else
        {
            for (int y=0;y<m;y++)
            {
                suma+=matrix[index-1][y];
            }
        }
        cout<<suma<<endl;
    }
    return 0;
}
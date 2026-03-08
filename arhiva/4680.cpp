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
#include <iostream>
#include <thread>
using namespace std;

int main() {
    int n,m,c;
    cin>>n>>m>>c;

    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrix[i][j];
        }
    }

    int cnt=0;
    for(int i=c;i<n-c;i++)
    {
        for(int j=c;j<m-c;j++)
        {
            bool ok=true;
            int center=matrix[i][j];
            for (int x=-c;x<=c;x++)
            {
                for (int y=-c;y<=c;y++)
                {
                    if (matrix[i+x][j+y]>center)
                    {
                        ok=false;
                        break;
                    }
                }
                if (!ok)break;
            }
            if (ok)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
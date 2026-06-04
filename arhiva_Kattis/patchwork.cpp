#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void showQuilt(int n,int m,vector<string> quilt)
{
    for (int i = 0; i < n; i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << quilt[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<string> quilt(n,string(m,'.'));

    int k;
    cin >> k;
    vector<vector<string>> patches;
    for (int i = 0; i < k; i++)
    {
        int a,b;
        cin >> a >> b >> ws;

        vector<string> patch;
        for (int j=0;j<a;j++)
        {
            string line;
            getline(cin, line);
            patch.push_back(line);
        }

        patches.push_back(patch);
        patch.clear();
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a,b,pos;
        cin >> a >> b >> pos;

        pos--;
        int patchX = patches[pos].size();
        int patchY = patches[pos][0].size();

        for (int x=0;x<patchX;x++ )
        {
            for (int y=0;y<patchY;y++)
            {
                if (x+a < n && y+b < m)
                {
                    quilt[x+a][y+b]=patches[pos][x][y];
                }
            }
        }
    }

    showQuilt(n,m,quilt);
    return 0;
}
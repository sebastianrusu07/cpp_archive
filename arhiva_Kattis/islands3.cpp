#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

char map[51][51];
int cnt[51][51];

int counter=0;
int n,m;

void fillLand(int x,int y)
{
    map[x][y]='*';
    cnt[x][y]=counter;
    if (x>0 && (map[x-1][y]=='L' || map[x-1][y]=='C'))
    {
        fillLand(x-1,y);
    }
    if (x<n-1 && (map[x+1][y]=='L' || map[x+1][y]=='C'))
    {
        fillLand(x+1,y);
    }
    if (y<m-1 && (map[x][y+1]=='L' || map[x][y+1]=='C'))
    {
        fillLand(x,y+1);
    }
    if (y>0 && (map[x][y-1]=='L' || map[x][y-1]=='C'))
    {
        fillLand(x,y-1);
    }
}

void print()
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<map[i][j]<<' ';
        }
        cout <<'\n';
    }
    cout << '\n';
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<cnt[i][j]<<' ';
        }
        cout <<'\n';
    }
}

int main(){
    cin>>n>>m;

    bool oneLand=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>map[i][j];
            if (map[i][j]=='L')
            {
                oneLand=true;
            }
        }
    }

    if (!oneLand)
    {
        cout << 0;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(map[i][j]=='L')
            {
                counter++;
                fillLand(i,j);
            }
        }
    }

    cout << counter;
    return 0;
}
#include <fstream>
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

ifstream cin("tttt.in");
ofstream cout("tttt.out");

int main()
{
    char board[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> board[i][j];
        }
    }

    vector<string> combinations;
    combinations.push_back(string(1,board[0][0])+string(1,board[0][1])+string(1,board[0][2]));
    combinations.push_back(string(1,board[1][0])+string(1,board[1][1])+string(1,board[1][2]));
    combinations.push_back(string(1,board[2][0])+string(1,board[2][1])+string(1,board[2][2]));

    combinations.push_back(string(1,board[0][0])+string(1,board[1][0])+string(1,board[2][0]));
    combinations.push_back(string(1,board[0][1])+string(1,board[1][1])+string(1,board[2][1]));
    combinations.push_back(string(1,board[0][2])+string(1,board[1][2])+string(1,board[2][2]));

    combinations.push_back(string(1,board[0][0])+string(1,board[1][1])+string(1,board[2][2]));
    combinations.push_back(string(1,board[0][2])+string(1,board[1][1])+string(1,board[2][0]));

    set<string> soloWins;
    set<string> teamWins;
    for(int i=0;i<combinations.size();i++)
    {
        set<char> s(combinations[i].begin(),combinations[i].end());
        sort(combinations[i].begin(),combinations[i].end());
        if (s.size()==1)
        {
            soloWins.insert(string(1,combinations[i][0]));
        }else if (s.size()==2)
        {
            teamWins.insert(string(1,combinations[i][0])+string(1,combinations[i][2]));
        }
    }

    cout << soloWins.size() << '\n' << teamWins.size();

    cin.close();
    cout.close();
    return 0;
}
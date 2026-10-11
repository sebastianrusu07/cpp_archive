#include <fstream>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> tower,positions;
    for (int i = 1; i<=n; i++)
    {
        int cube;
        cin >> cube;
        if (tower.empty() || cube <= tower.top())
        {
            tower.push(cube);
            positions.push(i);
        }else
        {
            while (!tower.empty() && cube > tower.top())
            {
                tower.pop();
                positions.pop();
            }
            tower.push(cube);
            positions.push(i);
        }
    }
    cout << positions.size() << '\n';
    string ans;
    while (!positions.empty())
    {
        ans = to_string(positions.top()) + ' ' + ans;
        positions.pop();
    }
    cout << ans;
    return 0;

}
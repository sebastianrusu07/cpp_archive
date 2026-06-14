#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> neumann;
    neumann.push_back("{}");

    for(int i=1; i<=n; i++)
    {
        string construct;
        for (int j=0;j<i;j++)
        {
            construct+=neumann[j];
            if (j!=i-1)
            {
                construct+=",";
            }

        }
        construct = '{' + construct+ '}';
        neumann.push_back(construct);
    }

    cout << neumann[n];
    return 0;
}
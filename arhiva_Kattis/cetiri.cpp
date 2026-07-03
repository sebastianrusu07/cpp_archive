#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> seq(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> seq[i];
    }

    sort(seq.begin(), seq.end());

    int ratio = min(seq[1]-seq[0], seq[2]-seq[1]);
    if (ratio == 0)
    {
        cout << seq[0];
        return 0;
    }

    int compare = seq[0];
    for (int i = 1; i <= 3; i++)
    {
        if (find(seq.begin(),seq.end(),compare+i*ratio)==seq.end())
        {
            cout << compare+i*ratio << "\n";
            return 0;
        }
    }
    return 0;
}
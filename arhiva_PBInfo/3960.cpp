#include <fstream>
#include <queue>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

ifstream cin("intersectie.in");
ofstream cout("intersectie.out");

int main()
{
    vector<int> firstSet;
    int nr;
    while (cin >> nr && nr>0)
    {
        firstSet.push_back(nr);
    }
    vector<int> secondSet;
    while (cin >> nr)
    {
        if (nr == 0)
        {
            vector<int> result;
            set_intersection(firstSet.begin(), firstSet.end(),secondSet.begin(),secondSet.end(),back_inserter(result));
            secondSet.clear();
            firstSet = result;
            result.clear();

        }else
        {
            secondSet.push_back(nr);
        }
    }
    if (firstSet.empty())
    {
        cout << "nu exista";
        return 0;
    }
    for (int i = 0; i < firstSet.size(); ++i)
    {
        cout << firstSet[i] << ' ';
    }
    cout << endl;
    return 0;
}
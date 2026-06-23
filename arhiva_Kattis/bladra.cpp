#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
using namespace std;

int solvesForProblem[100005];

int main()
{
    int problems,solves;
    cin >> problems >> solves;

    for (int i=0;i<solves;i++)
    {
        int team,problemSolved;
        cin >> team >> problemSolved;
        solvesForProblem[problemSolved]++;
    }

    int minSolves=INT_MAX;
    for (int i=1;i<=problems;i++)
    {
        if (solvesForProblem[i]<minSolves)
        {
            minSolves=solvesForProblem[i];
        }
    }
    cout << minSolves;
    return 0;
}
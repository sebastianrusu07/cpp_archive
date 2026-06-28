#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    if (n==0) //obvious cuz it means both teams are 0-0
    {
        cout << "Jebb";
        return 0;
    }

    if (n==2 && k==2) //both teams scored and theres 2 goals scored so its 1-1
    {
        cout << "Jebb";
        return 0;
    }
    cout << "Neibb";
    return 0;
}
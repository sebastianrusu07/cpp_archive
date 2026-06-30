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
    int n;
    cin >> n;

    int next=1;
    for(int i=1;i<=n;i++)
    {
        string nr;
        cin >> nr;

        if (nr!="mumble" && stoi(nr)!=next)
        {
            cout << "something is fishy";
            return 0;
        }
        next++;
    }
    cout << "makes sense";
    return 0;
}
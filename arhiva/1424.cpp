#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <ctime>
using namespace std;

ifstream cin("smartphone.in");
ofstream cout("smartphone.out");

int main() {
    int n,c;;
    cin >> c >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        arr.push_back(nr);
    }
    sort(arr.begin(), arr.end());
    if (c==1)cout << arr[arr.size()-1];
    else cout << arr[arr.size()-2];
    return 0;
}
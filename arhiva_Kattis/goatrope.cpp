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
    double x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    double cx = max(x1, min(x, x2));
    double cy = max(y1, min(y, y2));

    double dist = sqrt((x-cx)*(x-cx) + (y-cy)*(y-cy));
    cout << dist << "\n";

    return 0;
}
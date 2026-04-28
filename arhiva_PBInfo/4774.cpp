#include <fstream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

ifstream cin("lift.in");
ofstream cout("lift.out");

int freq[10];

void extract(int nr) {
    if (nr==0) freq[0]++;
    while(nr) {
        freq[nr % 10]++;
        nr /= 10;
    }
}

int main() {
    int t, n;
    cin >> t >> n;

    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        extract(nr);
    }

    if (t == 1) {
        int smallest = -1, app = INT_MAX;
        for (int i = 0; i <= 9; i++)
        {
            if (freq[i] > 0 && freq[i] < app)
            {
                app = freq[i];
                smallest = i;
            }
        }
        cout << smallest;
        return 0;
    }

    vector<pair<int,int>> v;
    for (int i = 0; i <= 9; i++)
    {
        v.push_back(make_pair(freq[i], i));
    }

    sort(v.rbegin(), v.rend());

    cout << min(v[0].second, v[1].second) << ' ' << max(v[0].second, v[1].second);
    return 0;
}
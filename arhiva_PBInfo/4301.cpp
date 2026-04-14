#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("gustare.in");
ofstream cout("gustare.out");

int main(){
    int cNr;
    cin >> cNr;
    vector<int> cucuruz;
    for (int i = 0; i < cNr; i++)
    {
        int nr;
        cin >> nr;
        cucuruz.push_back(nr);
    }

    int mNr;
    cin >> mNr;
    vector<int> mar;
    for (int i = 0; i < mNr; i++)
    {
        int nr;
        cin >> nr;
        mar.push_back(nr);
    }

    sort(cucuruz.begin(),cucuruz.end());
    sort(mar.begin(),mar.end());

    int t;
    cin >> t;
    while (t--)
    {
        long long quota;
        cin >> quota;

        int i = 0,j = mNr - 1;
        bool found = false;

        while (i < cNr && j >= 0)
        {
            long long sum = cucuruz[i] + mar[j];
            if (sum == quota)
            {
                found = true;
                break;
            }
            if (sum < quota)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        if (found)cout << "DA\n";
        else cout << "NU\n";
    }
    return 0;
}
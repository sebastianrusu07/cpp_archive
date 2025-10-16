#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("ordsume.in");
ofstream cout("ordsume.out");

int main() {
    int n;
    cin >> n;
    vector<int> vec;
    unordered_map<int, int> mapS;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        vec.push_back(nr);
    }
    vector<int> sume;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int suma = vec[i] + vec[j];
            if (!mapS.count(suma) && vec[i] != vec[j])
            {
                mapS[suma] = 1;
                sume.push_back(suma);
            }
        }
    }
    sort(sume.begin(), sume.end());
    for (int i = 0; i < sume.size(); i++)
    {
        cout << sume[i] << " ";
    }
    return 0;
}
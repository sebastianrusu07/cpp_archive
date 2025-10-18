#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    for (int i = 2; i < n*n; i++)
    {
        v.push_back((v[i-1]+v[i-2])%10);
    }
    int counter = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        counter++;
        if (counter == n)
        {
            cout << endl;
            counter = 0;
        }
    }
    return 0;
}
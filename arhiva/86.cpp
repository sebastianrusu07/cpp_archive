#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("halfsort.in");
ofstream cout("halfsort.out");

int main() {

    int n;
    cin >> n;
    vector<int> vector;
    for (int i = 0; i < n; i++) {
        int nr;
        cin >> nr;
        vector.push_back(nr);
    }
    sort(vector.begin(),vector.begin()+n/2);
    sort(vector.begin()+n/2,vector.end(),greater<int>());
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }

    cin.close();
    cout.close();

    return 0;
}
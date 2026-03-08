#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

int main() {

    int n;
    cin>>n;

    int mid = (n+1)/2 + (n%2==0);

    for (int i=1; i<n/2; i++)
    {
        cout << 9;
    }
    cout << 8;
    for (int i=mid; i<=n; i++)
    {
        cout << 9;
    }
    return 0;
}
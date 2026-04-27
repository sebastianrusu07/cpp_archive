#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
using namespace std;

ifstream cin("formula1.in");
ofstream cout("formula1.out");

int main(){
    long long t,n,k;
    cin >> t >> k >> n;

    if (t==1)
    {
        long long root = k*2-1;
        cout << root*root;
        return 0;
    }

    long long suma = 2*n*(n*n-1)/3;
    long long root = floor((sqrt(2*suma + 1) + 1) / 2);
    cout << (2*root-1)*(2*root-1);
    return 0;
}
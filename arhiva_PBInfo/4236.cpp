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
#include <iostream>
#include <thread>
using namespace std;

int main(){
    unsigned long long n,m;
    cin >> n >> m;

    unsigned long long firstCorner = min(n,m);

    unsigned long long poisonedSquares = firstCorner*(firstCorner+1LL)/2;
    unsigned long long totalSquares = n*m;
    unsigned long long healthySquares = totalSquares - poisonedSquares;

    cout << healthySquares << endl;
    return 0;
}
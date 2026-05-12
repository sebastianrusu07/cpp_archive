#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


int main() {
    string s;
    cin >> s;
    cout << (s.substr(0,3)=="555")? 1 : 0;
    return 0;
}
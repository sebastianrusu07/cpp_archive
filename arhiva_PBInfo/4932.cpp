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

int main()
{
    string n;
    cin >> n;

    string s;
    for(int i=1;i<n.size();i++)
    {
        int a = n[i]-'0';
        int b = n[i-1]-'0';
        int dif = abs(a-b);
        char c = '0' + dif;
        s+=c;
    }
    cout<<stoi(s);
    return 0;
}
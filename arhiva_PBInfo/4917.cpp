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
    int s,r,cnt;
    cin>>s>>r>>cnt;
    for(int i=0;i<cnt;i++)
    {
        cout << s+i*r << ' ';
    }
    return 0;
}
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

bool isAlipit(long long nr)
{
    string s = to_string(nr);
    for (int size=1;size<s.size();size++)
    {
        if (s.size()%size != 0)continue;
        bool isOk = true;
        string target = s.substr(0,size);
        for (int i=size;i<s.size();i+=size)
        {
            string current = s.substr(i,size);
            if (current != target)
            {
                isOk = false;
            }
        }
        if (isOk)
        {
            return true;
        }
    }
    return false;
}

int main() {

    int n;
    cin>>n;

    long long suma=0;
    for (int i=0;i<n;i++)
    {
        long long nr;
        cin>>nr;

        if (nr<=9)
        {
            continue;
        }

        if (isAlipit(nr))
        {
            suma+=nr;
        }
    }
    cout<<suma;
    return 0;
}
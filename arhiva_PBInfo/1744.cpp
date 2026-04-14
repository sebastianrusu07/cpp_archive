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
#include <cctype>
using namespace std;

ifstream cin("nrlipsa2.in");
ofstream cout("nrlipsa2.out");

int freq[202];

int main()
{
    int nr;
    while (cin >> nr)
    {
        if (nr<=100 && nr>=-100) freq[nr+100]++;
    }

    for (int i = 0; i <= 200; i++)
    {
        if (freq[i]==0)
        {
            cout << i-100;
            return 0;
        }
    }
    cout << "nu exista";
    return 0;
}
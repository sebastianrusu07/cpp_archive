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

ifstream cin("afin.in");
ofstream cout("afin.out");

int main()
{
    int a,b;
    cin>>a>>b;

    string text;
    cin >> text;

    for(int i=0;i<text.length();i++)
    {
        text[i]=((text[i]-'a') * a + b ) % 26 + 'a';
    }

    cout<<text;
    return 0;
}
#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <set>
using namespace std;

ifstream cin("lungimerandmax.in");
ofstream cout("lungimerandmax.out");

int main()
{
    int maxLen;
    cin >> maxLen;

    string word;
    int currentLen = 0;
    while (cin >> word && word!="Sentinel")
    {
        if (currentLen + word.length() > maxLen)
        {
            cout << '\n' << word << " ";
            currentLen = word.length()+1;
        }else
        {
            cout << word << ' ';
            currentLen+=word.length()+1;
        }
    }
    return 0;
}
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

ifstream cin("sir_eval.in");
ofstream cout("sir_eval.out");

int main()
{
    string s;
    cin >> s;

    string result;
    int i=0;
    for (; s[i]!='='; i++)
    {
        result += s[i];
    }

    i++;
    string snr1;
    for (;s[i]!='+' && s[i]!='*';i++)
    {
        snr1 += s[i];
    }
    int nr1=stoi(snr1);

    char symbol = s[i];
    i++;
    string snr2 = s.substr(i);
    int nr2 = stoi(snr2);

    if (symbol=='+')
    {
        cout << result << "=" << nr2+nr1;
        return 0;
    }else
    {
        cout << result << "=" << nr1*nr2;
    }
    return 0;
}
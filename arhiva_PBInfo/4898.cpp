#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int ciobani,oi;
    cin >> ciobani >> oi;
    if (ciobani>oi)cout << "Sunt prea multi ciobani";
    else if (oi%ciobani==0)cout << oi/ciobani;
    else
    {
        cout << oi/ciobani+1 << " " << oi/ciobani;
    }
    return 0;
}
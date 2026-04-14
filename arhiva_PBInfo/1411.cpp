#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
using namespace std;

int main()
{
    int first, second;
    int counter=0;
    while (cin >> first >> second && (first != 0 && second != 0))
    {
        string firstStr=to_string(first), secondStr=to_string(second);
        if (firstStr[0]==secondStr[0])
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int sum=0;
    for (char i : input)
    {
        sum += i;
    }

    cout << char(sum/input.size());
    return 0;
}
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
    cin >> input;

    int pos1 = input.find("(");
    int pos2 = input.size() - input.find(")") - 1;

    cout << (pos1==pos2?"correct":"fix");
    return 0;
}
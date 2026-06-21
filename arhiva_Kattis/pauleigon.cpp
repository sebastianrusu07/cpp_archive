#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int switchEvery,turnsA,turnsB;
    cin>>switchEvery>>turnsA>>turnsB;

    int turns=turnsA+turnsB;
    cout << (turns/switchEvery%2==0?"paul":"opponent");
    return 0;
}
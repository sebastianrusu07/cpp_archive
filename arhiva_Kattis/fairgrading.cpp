#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int thingy=(a+b+2*c)/4;
    char grades[11]={'F','F','F','F','F','F','D','C','B','A','A'};
    cout << grades[thingy/10] << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int bobStart,bobEnd,bobMakes;
    cin>>bobStart>>bobEnd>>bobMakes;

    int currentAge,perYear;
    cin>>currentAge>>perYear;

    int bobMoney = (bobEnd-bobStart)*bobMakes;
    int initAge = currentAge;
    while ((currentAge-initAge)*perYear<=bobMoney)
    {
        currentAge++;
    }
    cout<<currentAge<<endl;
    return 0;
}
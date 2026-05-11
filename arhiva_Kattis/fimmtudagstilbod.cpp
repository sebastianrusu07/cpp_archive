#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<=2020){
        cout << 1000;
        return 0;
    }
    int extra=(n-2020)*100;
    cout << 1000+extra;
    return 0;
}
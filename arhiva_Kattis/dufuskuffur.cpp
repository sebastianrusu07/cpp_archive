#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if (a==b)
    {
        cout << "Dufur passa fullkomlega";
        return 0;
    }
    if(a<b){
        cout << "Dufur passa";
    }else{
        cout << "Dufur passa ekki";
    }
    return 0;
}
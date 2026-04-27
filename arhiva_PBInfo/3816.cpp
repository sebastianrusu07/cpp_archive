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
#include <iostream>
#include <thread>
using namespace std;

int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;

    if (a==c)
    {
        if (b==d)
        {
            cout << "Grafice echivalente";
        }else
        {
            cout << "Grafice paralele";
        }
        return 0;
    }

    double x = (d - b)/(a - c);
    double fx = a*x+b;

    cout<<fixed<<setprecision(2);

    x = double(int(x*100))/100.0;
    fx = double(int(fx*100))/100.0;
    cout << x << ' ' << fx;
    return 0;
}
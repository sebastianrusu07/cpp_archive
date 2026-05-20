#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;

    int big=0,secBig=0;
    for(int i=0;i<n;i++)
    {
        int price;
        cin >> price;
        if(price>big)
        {
            secBig=big;
            big=price;
        }else
        {
            if(price>secBig)
            {
                secBig=price;
            }
        }
    }
    cout << secBig;
    return 0;
}
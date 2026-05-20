#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int sumA=0;
    for(int i=1;i<=a;i++)
    {
        int t;
        cin>>t;
        sumA+=t;
    }

    int sumB=0;
    for(int i=1;i<=b;i++)
    {
        int t;
        cin>>t;
        sumB+=t;
    }

    if (sumA==sumB)
    {
        cout << "either";
        return 0;
    }
    cout << (sumA<sumB ? "left" : "right");
    return 0;
}
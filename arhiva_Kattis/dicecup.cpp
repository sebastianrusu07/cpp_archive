#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if (b<a)
    {
        swap(a,b);
    }
    for (int i=a+1; i<=b+1; i++)
    {
        cout<<i<<"\n";
    }
    return 0;
}
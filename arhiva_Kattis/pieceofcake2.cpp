#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int l,x,y;
    cin>>l>>x>>y;
    int vol=max(x,l-x)*max(y,l-y)*4;
    cout<<vol;
    return 0;
}
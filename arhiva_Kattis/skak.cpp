#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
#include <cmath>
using namespace std;

int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    cout<<(a!=x) + (y!=b);
    return 0;
}
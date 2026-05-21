#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;

    int cnt=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i]) cnt++;
    }
    cout << pow(2,cnt);
    return 0;
}
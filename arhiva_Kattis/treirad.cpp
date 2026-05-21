#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int produs=6;
    int cnt=0;
    for(int i=4; produs<n;i++)
    {
        produs*=i;
        produs/=(i-3);
        cnt++;
    }
    cout<<cnt;
    return 0;
}
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

int main(){
    int mini=999999999,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        mini=min(mini,nr);
    }
    cout<<mini;
    return 0;
}
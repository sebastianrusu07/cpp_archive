#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        sum+=nr;
    }
    cout << (sum%3==0 ? "yes" : "no");
    return 0;
}
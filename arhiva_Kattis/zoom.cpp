#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin>>nr;
        if (i%k==0) cout << nr << ' ';
    }
    return 0;
}
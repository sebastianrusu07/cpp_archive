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
        int cnt;
        cin>>cnt;
        if (k-cnt>=0)
        {
            k-=cnt;
            cout << 1;
        }else
        {
            cout << 0;
        }
    }
    return 0;
}
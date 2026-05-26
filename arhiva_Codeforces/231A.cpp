#include <iostream>
#include <iomanip>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            int nr;
            cin>>nr;
            sum+=nr;
        }
        if (sum>=2)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
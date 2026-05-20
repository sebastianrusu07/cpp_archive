#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int hours[25];

int main(){
    int  n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
    {
        int start,end;
        cin >> start >> end;
        for(int j=start;j<end;j++)
        {
            hours[j]++;
        }
    }

    int cnt=0;
    for(int i=0;i<=24;i++)
    {
        if(hours[i]>=k) cnt++;
    }
    cout << cnt;
    return 0;
}
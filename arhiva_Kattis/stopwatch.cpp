#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    if (n%2!=0)
    {
        cout << "still running";
        return 0;
    }

    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        int a,b;
        cin>>a>>b;
        sum+=(b-a);
    }
    cout<<sum;
    return 0;
}
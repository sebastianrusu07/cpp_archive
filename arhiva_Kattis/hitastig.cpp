#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long smallest=LLONG_MAX,biggest=LLONG_MIN;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        smallest=min(smallest,a);
        biggest=max(biggest,a);
    }
    cout << biggest << " " << smallest;
    return 0;
}
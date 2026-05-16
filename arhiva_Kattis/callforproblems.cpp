#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n;
    cin >> n;

    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        if (nr%2!=0) cnt++;
    }
    cout << cnt;
    return 0;
}
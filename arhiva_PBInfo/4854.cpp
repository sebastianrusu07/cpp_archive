#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>> n >> m;
    int a[n+5][m+5];
    int mic=2147483646,iMic=-1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int nr;
            cin>>nr;
            a[i][j]=nr;
            if (nr<mic) {
                mic=nr;
                iMic=j;
            }
        }
    }
    int target = a[n-1][m-1];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if (j==iMic) {
                cout << target << " ";
            }else {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
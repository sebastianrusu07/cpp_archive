#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;

    int cnt=1;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
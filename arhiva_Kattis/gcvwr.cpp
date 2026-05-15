#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    a-=b;
    a=a*9/10;
    for (int i=0;i<c;i++)
    {
        int nr;
        cin >> nr;
        a-=nr;
    }
    cout << a;
    return 0;
}
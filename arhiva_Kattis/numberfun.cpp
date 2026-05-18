#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        if (a+b==c || a-b==c || a*b==c || a/b==c)
        {
            cout<<"Possible\n";
            continue;
        }
        swap(a,b);
        if (a+b==c || a-b==c || a*b==c || a/b==c)
        {
            cout<<"Possible\n";
            continue;
        }
        cout<<"Impossible\n";
    }
    return 0;
}
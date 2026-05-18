#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int a=1,b=0,c=0;
    string input;
    cin >> input;
    for(int i=0;i<input.length();i++)
    {
        if (input[i]=='A')
        {
            swap(a,b);
        }
        if (input[i]=='B')
        {
            swap(b,c);
        }
        if (input[i]=='C')
        {
            swap(a,c);
        }
    }
    if (a==1)
    {
        cout << 1;
        return 0;
    }
    if (b==1)
    {
        cout << 2;
        return 0;
    }
    cout << 3;
    return 0;
}
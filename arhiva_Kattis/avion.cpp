#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    bool one=false;
    for (int i=1;i<=5;i++)
    {
        string input;
        getline(cin,input);
        if (input.find("FBI")!=string::npos)
        {
            cout << i << ' ';
            one=true;
        }
    }
    if (!one)
    {
        cout << "HE GOT AWAY!";
    }
    return 0;
}
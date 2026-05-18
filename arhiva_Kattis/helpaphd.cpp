#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string eq;
        cin >> eq;
        if (eq=="P=NP")
        {
            cout << "skipped\n";
            continue;
        }

        int pos=eq.find('+');
        int a=stoi(eq.substr(0,pos));
        int b=stoi(eq.substr(pos+1));
        cout << a+b << '\n';
    }
    return 0;
}
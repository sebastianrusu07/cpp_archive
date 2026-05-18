#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string a,b;
        cin >> a >> b;

        cout << a << '\n' << b << '\n';

        for(int j = 0; j < a.length(); j++)
        {
            if(a[j] == b[j])
            {
                cout << '.';
            }else
            {
                cout << '*';
            }
        }
        cout << "\n\n";
    }
    return 0;
}
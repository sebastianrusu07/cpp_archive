#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    string s;
    while (getline(cin,s))
    {
        char c=s[s.size()-1];
        if (c == '.')
        {
            cout << "*Nod*\n";
        }else
        {
            if (c=='?')
            {
                cout << "Quack!\n";
            }else
            {
                return 0;
            }
        }
    }
    return 0;
}
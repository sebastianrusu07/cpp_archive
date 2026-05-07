#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    if (s.find("COV")!=string::npos)
    {
        cout << "Veikur!";
    }else
    {
        cout << "Ekki veikur!";
    }
    return 0;
}
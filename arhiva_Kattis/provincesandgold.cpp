#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int g,s,c;
    cin >> g >> s >> c;
    int power=g*3+s*2+c;

    string victory[9]={" "," ","Estate","Estate","Estate","Duchy","Duchy","Duchy","Province"};
    string treasure[9]={"Copper","Copper","Copper","Silver","Silver","Silver","Gold","Gold","Gold"};
    if (power<2)
    {
        cout << "Copper";
        return 0;
    }
    if (power>8) power = 8;
    cout << victory[power] << " or " << treasure[power];
    return 0;
}
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if (a<b)
    {
        cout << "FAKE NEWS!";
        return 0;
    }
    if (a>b)
    {
        cout << "MAGA!";
        return 0;
    }
    cout << "WORLD WAR 3!";
    return 0;
}
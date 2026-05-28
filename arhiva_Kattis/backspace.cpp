#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while (s.find('<')!=string::npos){
        s.erase(s.find('<')-1,2);
    }

    cout << s;
    return 0;
}
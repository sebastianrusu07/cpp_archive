#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string input;
    getline(cin, input);
    if (input.find("kth")!=string::npos)
    {
        cout << "yes";
    }else
    {
        cout << "no";
    }
    return 0;
}
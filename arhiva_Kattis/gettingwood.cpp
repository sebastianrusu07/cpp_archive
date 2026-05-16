#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string input;
    getline(cin,input);
    auto location=input.find("tree");

    if (location!=string::npos)
    {
        cout<< location;
    }else
    {
        cout << "no trees here";
    }
    return 0;
}
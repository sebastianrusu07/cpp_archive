#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string input;
    getline(cin, input);

    bool smile=false,frown=false;
    if (input.find(":)")!=string::npos) smile = true;
    if (input.find(":(")!=string::npos) frown = true;

    if (smile && frown)
    {
        cout << "double agent";
        return 0;
    }
    if (smile)
    {
        cout << "alive";
        return 0;
    }
    if (frown)
    {
        cout << "undead";
        return 0;
    }
    cout << "machine";
    return 0;
}
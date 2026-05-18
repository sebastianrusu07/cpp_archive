#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int size;
    cin >> size;
    cout << '+';
    for(int i = 0; i < size; i++)
    {
        cout << '-';
    }
    cout << "+\n";

    for(int i = 0; i < size; i++)
    {
        cout << "|";
        for(int j=0; j < size; j++)
        {
            cout << ' ';
        }
        cout << "|\n";
    }

    cout << '+';
    for(int i = 0; i < size; i++)
    {
        cout << '-';
    }
    cout << "+\n";
    return 0;
}
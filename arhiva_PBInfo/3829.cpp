#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            cout << "#";
        }
        for (int k = 0; k < size+i*2; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < size-i-1; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size+2*(size-1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = size-2; i >=0 ; i--)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            cout << "#";
        }
        for (int k = 0; k < size+i*2; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < size-i-1; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
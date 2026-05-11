#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    string result;
    for(int i = 0; i < input.length(); i++)
    {
        if (input[i]==' ')
        {
            continue;
        }
        result += input[i];
    }
    cout << result;
    return 0;
}
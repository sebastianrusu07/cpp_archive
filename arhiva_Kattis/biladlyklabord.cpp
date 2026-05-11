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
    for(int i = 0; i < input.size(); i++)
    {
        if (input[i]==input[i+1])
        {
            continue;
        }
        result += input[i];
    }
    cout << result;
    return 0;
}
#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    input+=';';

    bool isInterval=false;
    string nr1,nr2;
    int sum=0;
    for (int i = 0; i < input.length(); i++)
    {
        if (!isdigit(input[i]))
        {
            if (input[i] == '-')
            {
                isInterval=true;
                continue;
            }
            if (isInterval)
            {
                sum+=stoi(nr2)-stoi(nr1)+1;
            }else
            {
                sum++;
            }
            nr2.clear();
            nr1.clear();
            isInterval=false;
        }else
        {
            if (isInterval)
            {
                nr2.push_back(input[i]);
            }else
            {
                nr1.push_back(input[i]);
            }
        }
    }
    cout << sum;
    return 0;
}
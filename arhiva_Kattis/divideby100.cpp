#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    string number,divisor;
    cin >> number >> divisor;

    while (divisor[divisor.length()-1] == '0' && number[number.length()-1] == '0')
    {
        divisor.pop_back();
        number.pop_back();
    }

    if (number.length()>divisor.length())
    {
        number.insert(number.length() - (divisor.length() - 1), ".");
        while (number[number.length() - 1] == '0') number.pop_back();
        if (number[number.length()-1] == '.') number.pop_back();
        cout<<number;
    }else
    {
        cout << "0.";
        for (int i=1;i< divisor.length() - number.length();i++)
        {
            cout << 0;
        }
        cout << number;
    }

    return 0;
}
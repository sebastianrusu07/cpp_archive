#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("inlocuirecuvant.in");
ofstream cout("inlocuirecuvant.out");

int main() {
    string from, to;
    cin >> from >> to;
    cin.ignore();

    string input;
    getline(cin, input);

    string result;
    string current;

    for (int i = 0; i <= input.size(); i++)
    {
        if (i == input.size() || input[i] == ' ')
        {
            if (current == from)
                result += to;
            else
                result += current;
            if (i < input.size()) result += ' ';
            current.clear();
        } else
        {
            current += input[i];
        }
    }

    cout << result;
    return 0;
}
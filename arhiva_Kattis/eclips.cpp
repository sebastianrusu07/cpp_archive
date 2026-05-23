#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    string word;
    bool one=false;
    while (cin >> word && word != "dandelion")
    {
        if (word.find('e')!=string::npos)
        {
            cout << word << ' ';
            one=true;
        }
    }
    if (!one) cout << "oh noes";
    return 0;
}
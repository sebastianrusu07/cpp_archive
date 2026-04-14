#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main()
{
    string word;
    int req=-1;
    while (cin>>word)
    {
        if (req==-1)req=word.length();
        if (word.length()!=req)
        {
            cout << "NU";
            return 0;
        }
    }
    cout << "DA" << " " << req;
    return 0;

}
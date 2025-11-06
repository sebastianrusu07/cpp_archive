#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int firstHalf(string nr,int l)
{
    string rawResult = nr.substr(0,l);
    return stoi(rawResult);
}

int secondHalf(string nr,int l)
{
    int compensate = (nr.size()%2!=0);
    string rawResult = nr.substr(l+compensate,l);
    return stoi(rawResult);
}

int main()
{
    string input;
    cin >> input;

    int len = input.length()/2;
    int first=firstHalf(input,len);
    int second=secondHalf(input,len);

    cout << abs(first-second);
    return 0;
}

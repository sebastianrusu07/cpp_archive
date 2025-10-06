#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    string nr;
    cin >> nr;
    int counter=0;
    for (int i = 0; i < nr.length(); i++)
    {
        string number = nr;
        number.erase(i,1);
        number.erase(0, number.find_first_not_of('0'));
        if(number.empty())
        {
            number = "0" ;
        }
        int check = stoi(number);
        if (check % 3 == 0)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
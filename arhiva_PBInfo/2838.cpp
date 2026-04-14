#include <iostream>
#include <vector>
using namespace std;

int NrPrime(int temp)
{
    string nr = to_string(temp);
    int counter = 0;
    for (int i = 0; i < nr.length(); i++)
    {
        if ((nr[i])=='2' || (nr[i])=='3' || (nr[i])=='5' || (nr[i])=='7')counter++;
    }
    return counter;
}
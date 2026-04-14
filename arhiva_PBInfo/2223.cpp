#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int nr;
    cin >> nr;
    int suma=0;
    while (nr)
    {
        suma += nr%10;
        nr /= 10;
    }
    int howMany=suma/9;
    string numar = "";
    for (int i=0;i<howMany;i++)
    {
        numar+='9';
    }
    int flag = 0;
    if (suma%9!=0)
    {
        numar+=(suma%9+'0');
        flag = 1;
    }
    for (int i=0;i<suma-howMany-flag;i++)
    {
        numar+='0';
    }
    cout << numar;
    return 0;
}
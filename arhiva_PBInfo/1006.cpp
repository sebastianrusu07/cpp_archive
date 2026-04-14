#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    for (int a=1;a<=9;a++)
    {
        for (int b=a+1;b<=9;b++)
        {
            for (int c=b+1;c<=9;c++)
            {
                for (int d=c+1;d<=9;d++)
                {
                    for (int e=d+1;e<=9;e++)
                    {
                        cout<< a << b << c << d << e << d << c << b << a << endl;
                    }
                }
            }
        }
    }
    return 0;
}
#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

double nreal(double a,double b)
{
    int temp=b,counter=0;
    while(temp)
    {
        counter++;
        temp/=10;
    }
    double nr = a + b/pow(10,counter);
    return nr;
}

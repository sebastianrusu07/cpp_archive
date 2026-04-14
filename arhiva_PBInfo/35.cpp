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

int count(double v[101],int n)
{
    double suma=0,medC=0;
    for(int i=0;i<n;i++)
    {
        suma+=v[i];
        medC++;
    }
    double media=suma/medC;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=media)counter++;
    }
    return counter;
}
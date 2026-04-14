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

int NrDiv(int nr)
{
    int suma=0;
    for (int i = 1; i*i <= nr; i++)
    {
        if (nr % i == 0)suma+=2;
        if (i*i == nr)suma--;
    }
    return suma;
}

int NextNrDiv(int nr)
{
    int target = NrDiv(nr);
    int suma=0,culprit=nr;
    while (suma != target)
    {
        culprit++;
        suma = NrDiv(culprit);
    }
    return culprit;
}

int PrevNrDiv(int nr)
{
    int target = NrDiv(nr);
    int suma=0,culprit=nr;
    while (suma != target && culprit!=-1)
    {
        culprit--;
        suma = NrDiv(culprit);
    }
    return culprit;
}
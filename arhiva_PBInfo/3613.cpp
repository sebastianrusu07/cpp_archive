#include <cmath>

bool isPP(int n)
{
    int root = sqrt(n);
    if (root*root == n)return true;
    return false;
}

int multiplu(int nr)
{
    for (int i = 1; true; i++)
    {
        if (isPP(i*nr))return i*nr;
    }
}
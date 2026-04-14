#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

bool isPerfect(int nr)
{
    string ogl = to_string(nr);
    reverse(ogl.begin(), ogl.end());
    nr = stoi(ogl);
    int root = sqrt(nr);
    return (root*root==nr);
}

int main()
{
    int a,b;
    cin >> a >> b;

    int rA = sqrt(a);
    int rB = sqrt(b);

    if (rA*rA < a)rA++;
    int counter=0;
    for (int i = rA; i <= rB; i++)
    {
        if (isPerfect(i*i))
        {
            counter++;
        }
    }

    cout << counter;
    return 0;
}

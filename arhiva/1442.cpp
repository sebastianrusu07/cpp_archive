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

int cifraControl(int nr)
{
    if (nr == 0) return 0;
    int cifra = (nr-1)%9 + 1;  //Interesanta formula multumesc chatgpt ca mi ai explicat pupici
    return cifra;
}

int sum_cifra_control(int a,int b)
{
    int counter=0;
    for(int i=a;i<=b;i++)
    {
        if (cifraControl(i)==a)
        {
            counter++;
        }
    }
    return counter;
}
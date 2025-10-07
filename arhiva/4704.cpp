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

bool isMajImp(int nr)
{
    int sumaImp = 0,sumaPar=0;
    for (int i = 2; i*i <= nr; i++)
    {
        if (nr % i == 0)
        {
            if (i*i !=nr)
            {
                if (i%2 != 0)
                {
                    sumaImp += i;
                }else
                {
                    sumaPar += i;
                }
                int complement = nr / i;
                if (complement%2 != 0)
                {
                    sumaImp += complement;
                }else
                {
                    sumaPar += complement;
                }
            }else
            {
                if (i%2 != 0)
                {
                    sumaImp += i;
                }else
                {
                    sumaPar += i;
                }
            }
        }
    }
    return (sumaImp>sumaPar?true:false);
}

int majImp(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (isMajImp(i))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,x;
    cin >> n >> x;
    cout << majImp(n,x);
    return 0;
}

#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

bool unFPrim(int nr)
{
    if (nr==1) return false;
    for (int i = 2; i*i <= nr; i++)
    {
        if (nr % i == 0)
        {
            while (nr % i == 0)
            {
                nr /= i;
            }
            if (nr==1)
            {
                return true;
            }
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int mare = -1;
    for (int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        if (unFPrim(nr))
        {
            mare=max(mare,nr);
        }
    }
    if (mare==-1)
    {
        cout << "NU EXISTA";
        return 0;
    }
    cout << mare;
    return 0;
}




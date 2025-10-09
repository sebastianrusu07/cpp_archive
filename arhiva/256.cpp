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

list<int> Lista = {1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,
701408733};

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (count(Lista.begin(), Lista.end(), nr) == 0)
        {
            cout << "NU";
        }else
        {
            cout << "DA";
        }
        cout << endl;
    }
    return 0;
}




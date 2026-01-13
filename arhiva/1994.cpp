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

//rate albe pe un rand == (n+1)/2

int main()
{
    int albe,negre;
    cin >> albe >> negre;

    int amountPerRow=1,prev=1;
    int albeNeeded = 1, negreNeeded = 0;
    int cnt=0;
    while (albeNeeded <= albe && negreNeeded <= negre)
    {
        albe-=albeNeeded;
        negre-=negreNeeded;

        int t = amountPerRow;
        amountPerRow += prev;
        prev = t;

        albeNeeded = (amountPerRow+1)/2;
        negreNeeded = (amountPerRow)/2;
        cnt++;
    }
    cout << cnt << '\n'  << albe << '\n' << negre;
    return 0;
}
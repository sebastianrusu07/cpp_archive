#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int least=INT_MAX,pos=-1;
    for (int i = 0; i < n; i++)
    {
        int spacejunk;
        cin >> spacejunk;
        if (spacejunk<least)
        {
            pos = i;
            least = spacejunk;
        }
    }
    cout << pos;
    return 0;
}
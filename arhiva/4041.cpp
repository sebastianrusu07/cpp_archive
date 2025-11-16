#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

//FORMULA SACRA A ULTIMULUI NR DINTR O MULTIME N : (n^2+n)/2

int main()
{
    long long target;
    cin>>target;
    if (target==1)
    {
        cout<<"1";
        return 0;
    }

    int index=0;
    long long largestNumberInIndexArea=1;
    while(largestNumberInIndexArea<target)
    {
        index++;
        largestNumberInIndexArea=(index*index+index)/2;
    }
    cout<<index;
    return 0;
}


#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("maxim5.in");
ofstream cout("maxim5.out");

int main()
{
    int nr,biggestNr=-1,recordBiggestNr=0,currentRowLength=0,recordRow=-1,recordRowLength=9999999;
    while (cin >> nr)
    {
        if (nr == 0)
        {
            if (currentRowLength < recordRowLength)
            {
                recordBiggestNr=biggestNr;
                recordRowLength=currentRowLength;
            }
            currentRowLength=0;
            biggestNr=-1;
        }else
        {
            biggestNr=max(nr,biggestNr);
            currentRowLength++;
        }
    }
    cout << recordBiggestNr;
    return 0;
}
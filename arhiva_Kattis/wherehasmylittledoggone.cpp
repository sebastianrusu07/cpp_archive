#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    double ear,tail;
    cin>>ear>>tail;

    double ratio = ear / tail;

    int dogs;
    cin>>dogs;

    bool leastOne=false;
    for(int i=0;i<dogs;i++)
    {
        string breed;
        double ratioMin,ratioMax,earMin,earMax;
        cin>>breed>>ratioMin>>ratioMax>>earMin>>earMax;

        if (ratio>=ratioMin && ratio<=ratioMax && ear>=earMin && ear<=earMax)
        {
            cout << breed << '\n';
            leastOne=true;
        }
    }
    if (!leastOne)
    {
        cout << "Mutt";
    }
    return 0;
}
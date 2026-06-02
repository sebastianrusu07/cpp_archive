#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int offset[13]={
    0,4,7,7,3,5,1,3,6,2,4,7,2
};

string days[7]={
    "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
};

int main()
{
    int day,month;
    cin>>day>>month;

    int startPos=offset[month];
    int key=(startPos+day-1)%7;
    string ans=days[key];
    cout<<ans;
    return 0;
}
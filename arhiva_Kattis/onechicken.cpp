#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int diff=b-a;

    if (diff>=0)
    {
        cout << "Dr. Chaz will have " << diff << " piece" << (diff!=1?"s":"") << " of chicken left over!";
    }else
    {
        cout << "Dr. Chaz needs " << abs(diff) << " more piece" << (abs(diff)!=1?"s":"") << " of chicken!";
    }
    return 0;
}
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

int main() {

    int n;
    cin>>n;

    int smallest=INT_MAX,smallestSum=0;
    int largest=INT_MIN,largestSum=0;
    long long suma=0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;

        suma++;
        if (nr<smallest)
        {
            smallest=nr;
            smallestSum=1;
        }else
        {
            if (nr==smallest)
            {
                smallestSum++;
            }
        }

        if (nr>largest)
        {
            largest=nr;
            largestSum=1;
        }else
        {
            if (nr==largest)
            {
                largestSum++;
            }
        }
    }
    if(suma-largestSum-smallestSum<0){
        cout << 0;
        return 0;
    }
    cout<<suma-largestSum-smallestSum;
    return 0;
}
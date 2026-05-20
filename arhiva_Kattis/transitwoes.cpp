#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int start,end,n;
    cin >> start >> end >> n;

    int maxTime=end-start;

    int walkTimes[n];
    int homeToFirst;
    cin >> homeToFirst;
    for(int i=0;i<n;i++){
        cin >> walkTimes[i];
    }

    int busRides[n];
    for(int i=0;i<n;i++){
        cin >> busRides[i];
    }

    int busCycles[n];
    for(int i=0;i<n;i++){
        cin >> busCycles[i];
    }

    int arrivalTime = homeToFirst;
    for(int i=0;i<n;i++){
        if(arrivalTime%busCycles[i]){
            arrivalTime=(arrivalTime/busCycles[i] + 1) * busCycles[i];
        }
        arrivalTime+=busRides[i]+walkTimes[i];
    }
    cout << (arrivalTime<=maxTime ? "yes" : "no");
    return 0;
}
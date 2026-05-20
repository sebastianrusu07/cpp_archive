#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    double total=0,pastTime,pastGlucose;
    cin >> pastTime >> pastGlucose;
    for(int i=1;i<t;i++)
    {
        double time,glucose;
        cin >> time >> glucose;

        total+= (pastGlucose+glucose)/2 * (time-pastTime);
        pastTime=time;
        pastGlucose=glucose;
    }
    cout << fixed << setprecision(7) << total/1000;
    return 0;
}
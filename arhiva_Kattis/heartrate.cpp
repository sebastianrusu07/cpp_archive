#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(4);
    for (int i = 0; i < n; i++)
    {
        double beats,time;
        cin >> beats >> time;

        double bpm = beats/time*60;
        cout << bpm - 60/time << ' ' << bpm << ' ' << bpm + 60/time << '\n';
    }
    return 0;
}
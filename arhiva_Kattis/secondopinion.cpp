#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int time;
    cin >> time;

    int hour=time/3600;
    int minutes=(time%3600)/60; // OUR BRAINS ARE GROWING
    int seconds=(time%3600)%60;
    cout << hour << " : " << minutes << " : " << seconds;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n;
    cin >> n;

    int people=0;
    for(int i=0;i<n;i++)
    {
        string junk1,direction;
        cin >> junk1 >> direction;

        int k;
        cin >> k;
        if (direction=="OUT") k=-k;
        people+=k;
    }
    if (people==0)
    {
        cout << "NO STRAGGLERS";
    }else
    {
        cout << people;
    }
    return 0;
}
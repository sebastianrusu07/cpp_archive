#include <iostream>
using namespace std;

int main()
{
    double temp;
    cin >> temp;

    if (temp <= 0.2)  cout << "Logn";
    else if (temp <= 1.5)  cout << "Andvari";
    else if (temp <= 3.3)  cout << "Kul";
    else if (temp <= 5.4)  cout << "Gola";
    else if (temp <= 7.9)  cout << "Stinningsgola";
    else if (temp <= 10.7) cout << "Kaldi";
    else if (temp <= 13.8) cout << "Stinningskaldi";
    else if (temp <= 17.1) cout << "Allhvass vindur";
    else if (temp <= 20.7) cout << "Hvassvidri";
    else if (temp <= 24.4) cout << "Stormur";
    else if (temp <= 28.4) cout << "Rok";
    else if (temp <= 32.6) cout << "Ofsavedur";
    else cout << "Farvidri";
    return 0;
}
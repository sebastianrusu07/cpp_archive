#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int vec[5];
    char grades[6]={'A','B','C','D','E','F'};
    for(int i = 0; i < 5; i++)
    {
        cin >> vec[i];
    }

    int grade;
    cin >> grade;

    int i=0;
    while (grade<vec[i] && i<5)
    {
        i++;
    }
    cout << grades[i];
    return 0;
}
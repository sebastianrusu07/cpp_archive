#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n;
    cin >> n;

    int hardest=0;
    for(int i=0;i<n;i++)
    {
        int nr;
        string fell;
        cin >> nr >> fell;

        if (fell=="nej")
        {
            hardest=max(hardest,nr);
        }
    }
    cout << hardest;
    return 0;
}
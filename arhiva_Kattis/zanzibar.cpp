#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        int past,import=0,nr=-1;
        for (int j=0;nr!=0;j++)
        {
            cin >> nr;
            if (nr==0)
            {
                break;
            }
            if (j!=0)
            {
                if (past*2<nr)
                {
                    import+=nr-past*2;
                }
            }
            past=nr;
        }
        cout << import << '\n';
    }
    return 0;
}
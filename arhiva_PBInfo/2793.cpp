#include <fstream>
using namespace std;

ifstream cin("pozitiiconsecutive.in");
ofstream cout("pozitiiconsecutive.out");

int main()
{
    int x,y;
    cin >> x >> y;
    cout << y << " " << x << " ";
    int toSubtract=y-x-2;
    while(x-toSubtract>=0)
    {
        x -= toSubtract;
        cout <<  x<<" ";
        toSubtract-=2;
    }
    return 0;
}

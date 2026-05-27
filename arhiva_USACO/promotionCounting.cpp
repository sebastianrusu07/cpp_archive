#include <fstream>
using namespace std;

ifstream cin("promote.in");
ofstream cout("promote.out");

int main()
{
    int a1,a2,b1,b2,c1,c2,d1,d2;
    cin >> a1 >> a2 >> b1 >> b2>> c1 >> c2 >> d1 >> d2;

    int goldProms=d2-d1;
    int silverProms=c2-c1+goldProms;
    int bronzeProms=b2-b1+silverProms;

    cout << bronzeProms << '\n' << silverProms << '\n' << goldProms;
    return 0;
}
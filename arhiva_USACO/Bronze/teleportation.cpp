#include <fstream>
#include <iomanip>
#include <unordered_map>
using namespace std;

ifstream cin("teleport.in");
ofstream cout("teleport.out");

int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;

    int walk=abs(a-b);
    int teleport1=abs(a-x)+abs(b-y);
    int teleport2=abs(a-y)+abs(b-x);

    cout << min(walk,min(teleport1,teleport2));
    return 0;
}
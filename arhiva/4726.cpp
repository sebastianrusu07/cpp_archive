#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compare(int a,int b) {
    string A = to_string(a);
    string B = to_string(b);
    string first = A+B;
    string second = B+A;
    int Ok = stoi(first);
    int Ok2 = stoi(second);
    return min(Ok,Ok2);
}

int main()
{
    int n,m;
    cin >> m >> n;
    int matrice[n][m];

    for(int i=1;i<=m;i++)
    {
        for(int y=1;y<=n;y++) {
            cout << compare(i,y) << " ";
        }
        cout << endl;
    }
    return 0;
}
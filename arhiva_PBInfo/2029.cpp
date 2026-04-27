#include <fstream>

using namespace std;

ifstream cin("afisaren.in");
ofstream cout("afisaren.out");

int main() {
    int n;
    cin >> n;
    cin.close();

    char x;
    for (int i = 1; i <= n; i++)
    {
        cin.open("afisaren.in");
        cin >> n;
        while (cin >> x)
        {
            cout << x;
        }
        cout << '\n';
        cin.close();
    }
    return 0;
}
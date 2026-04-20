#include <fstream>
#include <bitset>
#include <vector>
using namespace std;

ifstream fin("joc2020.in");
ofstream fout("joc2020.out");

int nrdiv[1000001];

int main() {
    int n;
    fin >> n;

    for (int i = 1; i <= 1000000; i++)
    {
        for (int j=2*i; j <= 1000000; j+=i)
        {
            nrdiv[j]++;
        }
    }

    for (int i=0;i<n;i++){
        int nr;
        fin >> nr;
        fout << nrdiv[nr]+1 << ' ';
    }
    return 0;
}
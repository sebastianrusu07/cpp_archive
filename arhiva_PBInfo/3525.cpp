#include <fstream>
#include <bitset>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("soft_prime.in");
ofstream cout("soft_prime.out");

bitset<1000001> ciur;
bitset<1000001> appears;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i*i <= 1000000; i++)
    {
        for (int j=2*i; j <= 1000000; j+=i)
        {
            ciur[j]=true;
        }
    }
    ciur[0]=true;
    ciur[1]=true;

    vector<int> primes;
    for (int i=0;i<n;i++){
        int nr;
        cin >> nr;
        if (!ciur[nr])
        {
            appears[nr]=true;
        }
    }
    if (appears[2]) cout << 2 << ' ';
    for (int i = 3; i <= 1000000; i+=2)
    {
        if (appears[i]) cout << i << ' ';
    }
    return 0;
}
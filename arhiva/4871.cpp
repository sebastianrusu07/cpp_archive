#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("inlocuirecuvant.in");
ofstream cout("inlocuirecuvant.out");

vector<long long> vec;

bool isPrime(long long n)
{
    for (int i=0;i<vec.size() && vec[i]*vec[i]<=n;i++)
    {
        if (n%vec[i]==0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n=1000000;
    int primes[1000001]={0};
    primes[0]=1;
    primes[1]=1;

    for (int i=2;i*i<=n;i++)
    {
        if (primes[i]==0)
        {
            for (int j=2;j*i<=n;j++)primes[i*j]=1;
        }
    }
    for (int i=2;i<=n;i++)
    {
        if (primes[i]==0)
        {
            vec.push_back(i);
        }
    }

    cin >> n;
    for (int i=0;i<n;i++)
    {
        long long nr;
        cin >> nr;
        if (nr<2)cout << "2\n";
        else
        {
            long long next = nr + 1 + nr%2;
            while (!isPrime(next))next+=2;
            cout << next << endl;
        }
    }
    return 0;
}
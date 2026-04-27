#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 1; i <= 2022; i++)
    {
        if (gcd(i, 2022) == 1)
        {
            v.push_back(i);
        }
    }

    for (int i=0;i<n;i++)
    {
        long long nr;
        cin >> nr;
        nr--;
        long long bigPoz = nr / v.size();
        long long poz = nr % v.size();

        cout << bigPoz * 2022 + v[poz] << " ";
    }

    return 0;
}
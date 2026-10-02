#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <string>
#include <bitset>
#include <fstream>
#include <set>
using namespace std;

ifstream cin("cubprim.in");
ofstream cout("cubprim.out");

#define LIMIT 3000000
#define ull unsigned long long

struct ans
{
    ull idx,root,num;
};


bool isComposite[LIMIT];
unordered_map<ull,ull> goodNumbers;
void init()
{
    isComposite[0]=true;
    isComposite[1]=true;
    for (int i=2;i*i<LIMIT;i++)
    {
        if (isComposite[i]) continue;

        for (int j=2*i;j<LIMIT;j+=i)
        {
            isComposite[j]=true;
        }
    }
}

int main()
{
    init();
    ull n;
    cin >> n;

    for (ull i=2;i<LIMIT;i++)
    {
        if (!isComposite[i])
        {
            goodNumbers[i*i*i]=i;
        }
    }

    vector<ans> numbers;
    for (ull i = 0; i < n; i++)
    {
        ull nr;
        cin >> nr;
        if (goodNumbers[nr])
        {
            ans k;
            k.num = nr;
            k.idx = i+1;
            k.root = goodNumbers[nr];
            numbers.push_back(k);
        }
    }

    sort(numbers.begin(),numbers.end(),[](ans a, ans b)
    {
        if (a.num > b.num)
        {
            return 1;
        }
        if (a.num == b.num && a.idx < b.idx)
        {
            return 1;
        }
        return 0;
    });

    cout << numbers.size() << '\n';
    for (auto it : numbers)
    {
        cout << it.idx << ' ' << it.root << ' ' << it.num << '\n';
    }
    return 0;
}
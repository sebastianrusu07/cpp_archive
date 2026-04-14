#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int iterations = word.length()/2;
    for (int i = 0; i < iterations; i++)
    {
        cout << word << endl;
        word.erase(word.length()/2-1, 2);
    }
    return 0;
}
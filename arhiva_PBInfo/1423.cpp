#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> cool;
    vector<char> nerds;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'a' || c == 'i' || c == 'o' || c == 'e' || c == 'u')
        {
            cool.push_back(c);
        }else
        {
            nerds.push_back(c);
        }
    }
    for (int i = 0; i < cool.size(); i++)cout << cool[i] << " ";
    for (int i = 0; i < nerds.size(); i++)cout << nerds[i] << " ";
    return 0;
}
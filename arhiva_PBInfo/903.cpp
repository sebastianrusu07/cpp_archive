#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    string text;
    getline(cin,text);

    int key;
    cin>>key;
    for (int i=0;i<text.size();i++)
    {
        if (!isalpha(text[i])) continue;
        text[i]=( text[i] - 'a' + key ) % 26 + 'a';
    }
    cout << text;
    return 0;
}
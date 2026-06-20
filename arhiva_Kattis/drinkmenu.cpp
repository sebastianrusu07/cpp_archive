#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int drinks,patrons;
    cin >> drinks >> patrons;
    cin.ignore();

    vector<string> menu;
    for (int i = 0; i < drinks; i++)
    {
        string name;
        getline(cin, name);
        menu.push_back(name);
    }

    unordered_map<string,int> memory;
    for (int i = 0; i < patrons; i++)
    {
        string person;
        getline(cin, person);

        if (!memory.count(person))
        {
            memory[person] = 0;
        }
        cout << menu[memory[person]] << '\n';

        memory[person]++;
    }

    return 0;
}
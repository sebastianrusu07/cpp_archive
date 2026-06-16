#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    unordered_map<int, string> dictionaryAB;
    unordered_map<string, int> dictionaryBA;

    string command;
    while (cin >> command)
    {
        if (command=="clear")
        {
            dictionaryAB.clear();
            dictionaryBA.clear();
        }else if (command == "def")
        {
            string name;
            int value;
            cin >> name >> value;

            if (dictionaryBA.count(name))
            {
                int oldValue = dictionaryBA[name];
                dictionaryAB.erase(oldValue);
            }
            dictionaryAB[value] = name;
            dictionaryBA[name] = value;
        }else
        {
            string input;
            cin >> input;

            int sum=0;
            char sign;
            string equation=input;
            bool allKnown=true;;

            if (!dictionaryBA.count(input))
            {
                allKnown = false;
            }else
            {
                sum=dictionaryBA[input];
            }
            while (cin >> sign && sign != '=')
            {
                cin >> input;

                equation=equation+" "+sign+" "+input;

                if (!dictionaryBA.count(input))
                {
                    allKnown = false;
                }else
                {
                    if (sign == '-')
                    {
                        sum -= dictionaryBA[input];
                    }else
                    {
                        sum += dictionaryBA[input];
                    }
                }
            }
            if (!allKnown)
            {
                cout << equation+" = unknown\n";
                continue;
            }
            if (!dictionaryAB.count(sum)) equation=equation+" = unknown";
            else equation=equation+" = " + dictionaryAB[sum];
            cout << equation << endl;
        }
    }
    return 0;
}
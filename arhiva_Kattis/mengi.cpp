#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;


int main()
{
    vector<string> deck;
    string card;
    while (cin >> card && card != "stop")
    {
        deck.push_back(card);
    }

    sort(deck.begin(), deck.end());

    int len = deck.size();
    bool atleastOne = false;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            for (int k = j + 1; k < len; k++)
            {
                string firstCard = deck[i];
                string secondCard = deck[j];
                string thirdCard = deck[k];

                unordered_set<char> comparatorSet; //put the characters for each property here, set having 2 means illegal
                bool illegalPick = false;
                for (int y=0; y<4; y++)
                {
                    comparatorSet.insert(firstCard[y]);
                    comparatorSet.insert(secondCard[y]);
                    comparatorSet.insert(thirdCard[y]);
                    if (comparatorSet.size() == 2)
                    {
                        illegalPick = true;
                        break;
                    }
                    comparatorSet.clear();
                }

                if (!illegalPick)
                {
                    atleastOne = true;
                    cout << firstCard << ' ' << secondCard << ' ' << thirdCard << '\n';
                }
            }
        }
    }

    if (!atleastOne)
    {
        cout << "Engin Mengi";
    }
    return 0;
}
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

void hangman1()
{
    cout<<"    ------    \n";
    cout<<"    |    |    \n";
    cout<<"    |         \n";
    cout<<"    |         \n";
    cout<<"    |         \n";
    cout<<"    |         \n";
    cout<<"   ===        \n";
}

void hangman2()
{
    cout<<"    ------    \n";
    cout<<"    |    |    \n";
    cout<<"    |    O    \n";
    cout<<"    |         \n";
    cout<<"    |         \n";
    cout<<"    |         \n";
    cout<<"   ===        \n";
}

void hangman3()
{
    cout<<"    ------    \n";
    cout<<"    |    |    \n";
    cout<<"    |    O    \n";
    cout<<"    |    |    \n";
    cout<<"    |         \n";
    cout<<"    |         \n";
    cout<<"   ===        \n";
}

void hangman4()
{
    cout<<"    ------    \n";
    cout<<"    |    |    \n";
    cout<<"    |    O    \n";
    cout<<"    |    |)   \n";
    cout<<"    |         \n";
    cout<<"    |         \n";
    cout<<"   ===        \n";
}

void hangman5()
{
    cout<<"    ------    \n";
    cout<<"    |    |    \n";
    cout<<"    |    O    \n";
    cout<<"    |   /|)   \n";
    cout<<"    |         \n";
    cout<<"    |         \n";
    cout<<"   ===        \n";
}

void hangman6()
{
    cout<<"    ------    \n";
    cout<<"    |    |    \n";
    cout<<"    |    O    \n";
    cout<<"    |   /|)   \n";
    cout<<"    |     ]   \n";
    cout<<"    |         \n";
    cout<<"   ===        \n";
}

void hangman7()
{
    cout<<"    ------    \n";
    cout<<"    |    |    \n";
    cout<<"    |    X    \n";
    cout<<"    |   /|)   \n";
    cout<<"    |   / ]   \n";
    cout<<"    |         \n";
    cout<<"   ===        \n";
}

bool hidden(vector<pair<char,bool>> v)
{
    for (int i=0;i<v.size();i++)
    {
        if (v[i].second==false)return true;
    }
    return false;
}

void whichImg(int nr)
{
    if (nr==7)
    {
        hangman1();
    }
    else if (nr==6)
    {
        hangman2();
    }
    else if (nr==5)
    {
        hangman3();
    }
    else if (nr==4)
    {
        hangman4();
    }
    else if (nr==3)
    {
        hangman5();
    }
    else if (nr==2)
    {
        hangman6();
    }
    else if (nr==1)
    {
        hangman7();
    }
}

int main() {
    string nr;
    cin >> nr;
    cout << "\n\n\n\n\n\n\n\n\n\n\n";
    vector<pair<char,bool>> foundL(nr.length());
    vector<char> lettersTried;
    for (int i = 0; i < nr.length(); i++)
    {
        foundL[i].first = toupper(nr[i]);
        foundL[i].second = false;
    }

    int lives=7;
    while (hidden(foundL) && lives)
    {
        whichImg(lives);
        cout << "\n\n Pana acum ai : ";
        for (int i=0;i<foundL.size();i++)
        {
            if (foundL[i].second==true)
            {
                cout << foundL[i].first;
            }else
            {
                cout << "_";
            }
            cout << " ";
        }
        if (!lives)break;
        cout << "\n Incearca-ti norocul : ";
        char attempt;
        cin >> attempt;
        bool flag = false;
        for(int i=0;i<foundL.size();i++)
        {
            if (foundL[i].first==toupper(attempt))
            {
                foundL[i].second = true;
                flag=true;
            }
        }
        if (!flag)lives--;

    }
    if (lives==0)
    {
        cout << "Fraiere";
        return 0;
    }
    cout << "Bravo boss!!";
    return 0;
}
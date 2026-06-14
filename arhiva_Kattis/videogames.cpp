#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> alice={"fishing"};
    vector<string> bob={"golf"};
    vector<string> charlie={"hockey"};

    for(int i=1;i<=n;i++)
    {
        string name,junk,game;
        cin >> name >> junk >> junk >> junk >> game;

        if (name=="alice")
        {
            if (find(alice.begin(),alice.end(),game)!=alice.end())
            {
                cout << "alice already has " << game << endl;
            }else if (find(bob.begin(),bob.end(),game)!=bob.end())
            {
                cout << "alice borrows " << game << " from bob\n";
                alice.push_back(game);
                auto pos=find(bob.begin(),bob.end(),game);
                bob.erase(pos);
            }else
            {
                cout << "alice borrows " << game << " from charlie\n";
                alice.push_back(game);
                auto pos=find(charlie.begin(),charlie.end(),game);
                charlie.erase(pos);
            }
        }else if (name=="bob")
        {
            if (find(alice.begin(),alice.end(),game)!=alice.end())
            {
                cout << "bob borrows " << game << " from alice\n";
                bob.push_back(game);
                auto pos=find(alice.begin(),alice.end(),game);
                alice.erase(pos);
            }else if (find(bob.begin(),bob.end(),game)!=bob.end())
            {
                cout << "bob already has " << game << endl;
            }else
            {
                cout << "bob borrows " << game << " from charlie\n";
                bob.push_back(game);
                auto pos=find(charlie.begin(),charlie.end(),game);
                charlie.erase(pos);
            }
        }else
        {
            if (find(alice.begin(),alice.end(),game)!=alice.end())
            {
                cout << "charlie borrows " << game << " from alice\n";
                charlie.push_back(game);
                auto pos=find(alice.begin(),alice.end(),game);
                alice.erase(pos);
            }else if (find(bob.begin(),bob.end(),game)!=bob.end())
            {
                cout << "charlie borrows " << game << " from bob\n";
                charlie.push_back(game);
                auto pos=find(bob.begin(),bob.end(),game);
                bob.erase(pos);
            }else
            {
                cout << "charlie already has " << game << endl;
            }
        }
    }
    return 0;
}
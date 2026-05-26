#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
using namespace std;

ifstream stfile("starters.txt");
ifstream mdfile("middle.txt");
ifstream edfile("end.txt");

mt19937 rng(time(0));
uniform_real_distribution<double> dist(-1.0, 1.0);

int main(){
    cout << "Introduceti dificultatea dorita (1.0 - 10.0) :\n";
    double diff;
    cin >> diff;


    double diffStarter=double(int((diff+dist(rng))*10))/10.0;
    if (diffStarter<1.0) diffStarter=1.0;
    if (diffStarter>10.0) diffStarter=10.0;
    double diffMiddle=double(int((diff+dist(rng))*10))/10.0;
    if (diffMiddle<1.0) diffMiddle=1.0;
    if (diffMiddle>10.0) diffMiddle=10.0;
    double diffEnd=double(int((diff+dist(rng))*10))/10.0;
    if (diffEnd<1.0) diffEnd=1.0;
    if (diffEnd>10.0) diffEnd=10.0;

    vector<pair<string,double>> starters;
    string input;

    while (getline(stfile, input))
    {
        if (input.empty()) continue;
        int pos = input.find('/');
        starters.push_back({input.substr(0, pos), stod(input.substr(pos + 1))});
    }

    vector<pair<string,double>> middle;
    while (getline(mdfile,input))
    {
        if (input.empty()) continue;
        int pos = input.find("/");
        middle.push_back({input.substr(0,pos),stod(input.substr(pos+1))});
    }

    vector<pair<string,double>> end;
    while (getline(edfile,input))
    {
        if (input.empty()) continue;
        int pos = input.find("/");
        end.push_back({input.substr(0,pos),stod(input.substr(pos+1))});
    }

    string segment1;
    double range=0.5;
    bool stop=false;
    while (!stop)
    {
        for (auto it : starters)
        {
            if (abs(it.second-diffStarter)<=range)
            {
                segment1 = it.first;
                stop=true;
                break;
            }
        }
        range+=0.5;
    }
    stop=false;range=0.5;

    string segment2;
    while (!stop)
    {
        for (auto it : middle)
        {
            if (abs(it.second-diffMiddle)<=range)
            {
                segment2 = it.first;
                stop=true;
                break;
            }
        }
        range+=0.5;
    }
    stop=false;range=0.5;

    string segment3;
    while (!stop)
    {
        for (auto it : end)
        {
            if (abs(it.second-diffEnd)<=range)
            {
                segment3 = it.first;
                stop=true;
                break;
            }
        }
        range+=0.5;
    }

    cout << segment1 <<" "<< segment2 <<" "<< segment3;
    return 0;
}
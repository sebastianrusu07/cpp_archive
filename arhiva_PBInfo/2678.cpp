#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin,input);

    int sum=0;
    string wordFormation;
    for(int i=0;i<input.size();i++){
        if(input[i]>='0' && input[i]<='9'){
            wordFormation.push_back(input[i]);
        }else{
            if(!wordFormation.empty()){
                int nr = stoi(wordFormation);
                sum+=nr;
                wordFormation.clear();
            }
        }
    }
    if(!wordFormation.empty()){
        int nr = stoi(wordFormation);
        sum+=nr;
        wordFormation.clear();
    }
    cout << sum;
    return 0;
}

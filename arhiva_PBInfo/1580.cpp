#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

ifstream cin("schimb.in");
ofstream cout("schimb.out");

void revert(string &s){
    reverse(s.begin(),s.end());
}
int main(){
    int n,from,to;
    cin >> n >> from >> to;

    char replaceWith = 'a' + to - 1;
    for(int i=0;i<n;i++){
        string word;
        cin >> word;
        if(word.length() < from){
            revert(word);
        }else{
            word[from-1] = replaceWith;
        }
        cout << word << '\n';
    }
    return 0;
}
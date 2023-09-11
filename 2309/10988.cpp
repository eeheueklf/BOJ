#include <iostream>

using namespace std;

int main(){

    int flag = 1;
    string s;
    cin >> s;

    for(int i=0;i<s.size()/2;i++){
        if(s[i] != s[s.size()-i-1]){
            flag = 0;
            break;
        }
    }

    cout << flag;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string s[5] = {};
    for(int i=0;i<5;i++){
        cin >> s[i];
    }
    for(int j=0;j<15;j++){
        for(int i=0;i<5;i++){
            if(j<s[i].size()){
                cout << s[i][j];    
            }
        }
    }
}
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        cout <<s[i];
        if((i+1)%10==0) cout <<"\n";
    }
    return 0;
}


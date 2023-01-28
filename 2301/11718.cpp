#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    while (true){
        getline(cin, s);
        if (s=="")
            break;
        cout << s << "\n";
    } 
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    string S;
    int T;
    cin >> T;
    for(int Cnt=0;Cnt<T;Cnt++){
        cin >> S;   
        cout << S[0] << S[S.length()-1] << "\n";
    }
}
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string N;
    int B, number = 0;
    char a;

    cin >> N >> B;

    for(int i=0;i<N.size();i++){
        if(int(N[i]>64)){
            number += (int(N[i]) - 55) *pow(B, N.size()-i-1);
        }
        else{
            number += (N[i]-'0') *pow(B, N.size()-i-1);
        }
    }
    cout << number;
    
}
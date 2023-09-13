#include <iostream>
#include <string>

using namespace std;

int main(){

    int N, B, l;
    string number = "";

    cin >> N >> B;
    while(N>0){
        l = N % B;
        N/=B; 
        if(l>=10){
            number.push_back((char)(l + '7'));
        }
        else{
            number += to_string(l);
        }
        
    }
    for(int i=number.size();i>0;i--){
        cout << number[i-1];
    }
    
}
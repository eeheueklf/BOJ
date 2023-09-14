#include <iostream>

using namespace std;

int main(){
    int TestCase, C, j=0;
    int Coin[4] = {25, 10, 5, 1};
    cin >> TestCase;
    float left;

    for(int i=0;i<TestCase;i++){
        cin >> C;
        while(j<4){
            if((C / Coin[j])>0){
                cout << C / Coin[j] << " ";
                C %= Coin[j];

            }
            else{
                cout << "0 ";
            }
            j++;
        }
        j=0;
    }
}
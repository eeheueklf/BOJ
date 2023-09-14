#include <iostream>

using namespace std;

int main(){
    int N, h=0, widthN =0, heightN=0;
    cin >> N;
    string S[101];
    for(int i=0;i<N;i++){
        cin >> S[i];
    }

    for(int i=0;i<N;i++){
        h=0;
        for(int j=0;j<N;j++){
            if(S[i][j]=='.'){
                h++;
                if(j==N-1 && h>=2){
                    widthN ++;
                    h=0;
                }
            }
            else {
                if(h>=2){
                    widthN ++;
                }
                h = 0;
            }
        }    
    }
    
    for(int i=0;i<N;i++){
        h=0;
        for(int j=0;j<N;j++){
            if(S[j][i]=='.'){
                h++;
                if(j==N-1 && h>=2){
                    heightN ++;
                    h=0;
                }
            }
            else {
                if(h>=2){
                    heightN ++;
                }
                h = 0;
            }
        }   
    }

    cout << widthN << " " << heightN;
}
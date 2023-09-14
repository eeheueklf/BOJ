#include <iostream>
using namespace std;

int main(){
    string channel[101];
    string channel_name, tmp;
    int N, ptr = 0;
    bool flag = false;

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> channel_name;
        channel[i] = channel_name;
    }

    while(!flag){
        if((channel[0].compare("KBS1")==0)&&(channel[1].compare("KBS2")==0)){
            flag = true;
            break;
        }
        // 
        if(channel[0].compare("KBS1")!=0){
            if(channel[ptr].compare("KBS1")!=0||ptr==0){
                ptr++;
                cout << "1";
            }
            else{
                tmp = channel[ptr-1];
                channel[ptr-1] = channel[ptr];
                channel[ptr] = tmp;
                ptr--;
                cout << "4";
            }
        }
        else{
            if(channel[ptr].compare("KBS2")!=0||ptr==1){
                ptr++;
                cout << "1";
                }
            else{
                tmp = channel[ptr-1];
                channel[ptr-1] = channel[ptr];
                channel[ptr] = tmp;
                ptr--;
                cout << "4";
            }
        }
    }

}
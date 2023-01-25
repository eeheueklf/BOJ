#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, d, day=1;
    cin >> m >> d;
    while(true){
        if(m==1&&d<8&&d>0) break;
        d-=7;
        if(d<0){
            m--;
            if(m==2) d+=28;
            else if((m<8&&m%2!=0)||(m>7&&m%2==0)) d+=31;
            else d+=30;
        }
    }
    switch(d){
        case 1: cout << "MON"; break;
        case 2: cout << "TUE"; break;
        case 3: cout << "WED"; break;
        case 4: cout << "THU"; break;
        case 5: cout << "FRI"; break;
        case 6: cout << "SAT"; break;
        case 7: cout << "SUN"; break;
        default: break;
    }
    return 0;
}


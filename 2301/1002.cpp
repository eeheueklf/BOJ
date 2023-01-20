#include <iostream>
#include <cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x1, y1, r1, x2, y2, r2, result;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(x1==x2 && y1==y2){
            if(r1==r2) cout << "-1\n";
            else cout << "-1\n";
        }
        else if(int(pow(x1-x2,2)+pow(y1-y2,2))==int(pow(r1+r2,2))) cout << "1\n";
        else if(int(pow(x1-x2,2)+pow(y1-y2,2))<pow(r1,2)||int(pow(x1-x2,2)+pow(y1-y2,2))<pow(r2,2))cout << "0\n";
        else if(int(pow(x1-x2,2)+pow(y1-y2,2))<int(pow(r1+r2,2))) cout << "2\n";
        else if(int(pow(x1-x2,2)+pow(y1-y2,2))>int(pow(r1+r2,2))) cout << "0\n";
        else cout << "2\n";
    }
//음수 좌표에 대한 해결책 필요 ..

}
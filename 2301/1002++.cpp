#include <iostream>
#include <cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    double max, min;
    cin >> n;
    for(int i=0;i<n;i++){
        int x1, y1, r1, x2, y2, r2, result;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(x1==x2 && y1==y2){
            if(r1==r2) cout << "-1\n";
            else cout << "0\n";
            continue;
        }
        double d = sqrt((x1 - x2) * (x1- x2) + (y1 -y2) * (y1 - y2));
        if(r1>=r2){
            max = r1; min = r2;
        }
        else{
            max = r2; min = r1;
        }
        
        if(max > min + d) cout << "0\n";
        else if(max == min + d) cout << "1\n";
        else if((max < min + d)&&(d < max + min)) cout << "2\n";
        else if(d == max+min) cout << "1\n";
        else if(d > max + min) cout << "0\n";
    }


}
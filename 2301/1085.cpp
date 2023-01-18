#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x, y, w, h, min;
    cin >> x >> y >> w >> h;

    min = x;
    if(y < min) min = y;
    if(w-x < min) min = w-x;
    if(h-y < min) min = h-y;

    cout << min;
}
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool aflag = true, bflag = true;

    for(int i=1;i<=8;i++){
        int t;
        cin >> t;
        if(aflag) {
            if(t!=i) 
                aflag=false;
            else continue;
        }
        else if(bflag) {
            if(t!=9-i) 
                bflag=false;
            else continue;
        }
    }
    if(aflag) cout << "ascending";
    else if(bflag) cout << "descending";
    else cout << "mixed";
    return 0;
}
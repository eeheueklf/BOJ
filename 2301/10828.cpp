#include <iostream>
using namespace std;
int stack[10001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, cursor=-1;
    cin >> N;
    for(int i=0;i<N;i++){
        string cmd;
        int t;
        cin >> cmd;

        if(cmd=="push"){
            cin >> t;
            cursor++;
            stack[cursor] = t;
        }
        else if(cmd=="pop"){
            if(cursor==-1){
                cout << "-1" << "\n";
            }
            else {
                cout << stack[cursor] << "\n";
                cursor--;
            }
        }
        else if(cmd=="top"){
            if(cursor==-1)
                cout << cursor << "\n";
            else
                cout << stack[cursor] << "\n";
        }
        else if(cmd=="size"){
            cout << cursor+1 << "\n";
        }
        else if(cmd=="empty"){
            if(cursor==-1) cout << "1" << "\n";
            else cout << "0" << "\n";
        }
    }
}
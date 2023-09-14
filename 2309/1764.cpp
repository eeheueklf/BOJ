#include <iostream>
#include <set>

using namespace std;

int main(){
    int N, M, k=0;
    set<string> noListen, noSee, noLS;
    set<string>::iterator itr;
    string s;

    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> s;
        noListen.insert(s);
    }
    for(int i=0;i<M;i++){
        cin >> s;
        noSee.insert(s);
    }

    for(auto it = noListen.begin(); it!=noListen.end();it++){
        itr = noSee.find(*it);
        if (itr != noSee.end())
            noLS.insert(*itr);
    }

    cout << noLS.size();
    for(auto it = noLS.begin(); it!=noLS.end();it++){
        cout<< "\n" << *it ;
    }
    return 0;
}
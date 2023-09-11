#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    string name, log;
    set<string> S;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> name >> log;
        cout << log;
        if(log.compare("enter")){
            cout << "얍";
            S.insert(name);
            cout << name;
        }
        else{
            S.erase(name);
        }
    }

    for(auto it=S.end();it !=S.begin();it--){
        cout << *it << "\n";
    }
}

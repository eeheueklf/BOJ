#include <iostream>
#include <vector>
using namespace std;
int round(int a, int b){
    int i=1, max=1;
    while(true){
        if(a%i==0&&b%i==0){
            a/=i; b/=i;
            max *= i;
            i=1;
        }
        if(i>=a||i>=b) {
            break;
        }
        i++;
    }
    return max;
}

int main()
{      
    ios::sync_with_stdio(0);
    cin.tie(0);
	
    int N, t;
    vector<int> v;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> t;
        v.push_back(t);
    }
    for(int i=1;i<N;i++){
        int max;
        max = round(v[0], v[i]);
        cout << v[0]/max << "/" << v[i]/max << "\n";
    }
    return 0;
}
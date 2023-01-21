#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, i=1, min=1, max=1;
    cin >> a >> b;
    while(true){
        if(a%i==0&&b%i==0){
            a/=i; b/=i;
            min *= i;
            i=1;
        }
        if(i>=a||i>=b) {
            max = min * a * b;
            break;
        }
        i++;
    }
    cout << min << "\n" << max;
}

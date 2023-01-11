#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[10][10], max=0;
    int r_i, r_j;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> arr[i][j];
            if(arr[i][j]>max){
                r_i = i;
                r_j = j;
                max = arr[i][j];
            }
        }
    }
    cout << max << "\n" << r_i+1 << " " << r_j+1;
    return 0;
}


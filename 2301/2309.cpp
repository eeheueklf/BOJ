#include <iostream>
using namespace std;

void check(int array[], int diff){
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(array[i]+array[j]==diff){
                array[i]=0;
                array[j]=0;
                return;
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0, diff, temp=0;
    int arr[10];
    for(int i=0; i<9;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    diff = sum - 100;
    check(arr, diff);
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;                
            }
        }
    }
    for(int i=2; i<9;i++){
        cout << arr[i] << "\n";
    }

}
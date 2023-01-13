//에라토스테네스의 체 이용

#include <iostream>
using namespace std;

void Eratos(int n)
{
    if (n <= 1) return;

	bool* PrimeArray = new bool[n + 1];

	for (int i = 2; i <= n; i++)
	    PrimeArray[i] = true;

	for (int i = 2; i * i <= n; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= n; j += i)
			    PrimeArray[j] = false;
	}
    for(int i=n/2;i<n;i++){
        if(PrimeArray[i]){
            for(int j=i;j>=2;j--){
                if(PrimeArray[j]) 
                    if(i+j==n) {
                        cout << j << " " << i << "\n";
                        return;
                    }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, T;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> T;
        Eratos(T);
    }
    return 0;
}


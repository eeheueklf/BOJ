//에라토스테네스의 체 이용

#include <iostream>
using namespace std;

void Eratos(int n, int m)
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
    for(int i=m;i<=n;i++){
        if(PrimeArray[i]) cout << i << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int M, N;
    cin >> M >> N;
    Eratos(N, M);

    return 0;
}

//에라토스테네스의 체 이용

#include <iostream>
using namespace std;

int Eratos(int n)
{
    if (n <= 1) return 1;
    int sum=0;

	bool* PrimeArray = new bool[2*n + 1];

	for (int i = 2; i <= 2*n; i++)
	    PrimeArray[i] = true;

	for (int i = 2; i * i <= 2*n; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= 2*n; j += i)
			    PrimeArray[j] = false;
	}
    for(int i=n+1;i<=2*n;i++){
        if(PrimeArray[i]) sum++;
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    while(true){
        cin >> N;
        if(N==0) break;
        cout << Eratos(N) << "\n";
    }

    return 0;
}


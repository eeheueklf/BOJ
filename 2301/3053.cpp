#include <iostream>
using namespace std;

int main()
{      
    ios::sync_with_stdio(0);
    cin.tie(0);
	cout.precision(6); 
	cout.setf(ios::fixed);
    int r;
    cin >> r;
    cout << (double)r * r * 3.14159265358979 << "\n";
    cout << r * r * 2;

    return 0;
}
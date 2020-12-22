#include<iostream>
using namespace std;
int main(){
	int m, n, k;
	cout << "Input m, n and k: ";
	cin >> m >> n >> k;
	cout << endl;
	int summ=0, mult=1;
	int a[m][n];
	cout << "Input elements: ";
	for (int i=1; i<m+1; i++){
		for (int j=1; j<n+1; j++){
			cin >> a[i][j];
		}
	}
	for (int j=1; j<n+1; j++){
		summ+=a[k][j];
		mult*=a[k][j];
	}
	cout << "Summ = " << summ << " " << "Mult = " << mult;
	return 0;
}

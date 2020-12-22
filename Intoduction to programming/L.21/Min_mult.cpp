#include<iostream>
using namespace std;
int main(){
	int m, n, column=1, min_mult=1, mult=1;
	cout << "Input m and n: ";
	cin >> m >> n;
	int a[m][n];
	cout << "Input elements: ";
	for (int i=1; i<m+1; i++){
		for (int j=1; j<n+1; j++){
			cin >> a[i][j];
		}
		min_mult *= a[i][1];
	}
	for (int j=1; j<n+1; j++){
		for (int i=1; i<m+1; i++){
			mult *= a[i][j];
		}
		if (mult < min_mult){
			min_mult = mult;
			column = j;
		}
		mult = 1;
	}
	cout << "Column = " << column << " " << "Min_Mult = " << min_mult;
	return 0;
}

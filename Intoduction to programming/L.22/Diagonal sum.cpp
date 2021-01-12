#include<iostream>
using namespace std;
int main(){
	int m, sum=0, d;
	cout << "Input m: ";
	cin >> m;
	int a[m][m];
	cout << "Input elements: " << endl;
	for (int i=0; i<m; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	cout << "Sums: " << endl;
	for (d=m-1; d>=-m+1; d--){
		for (int i=0; i<m; i++){
			for (int j=0; j<m; j++){
				if (j-i == d){
					sum += a[i][j];
				}
			}
		}
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}

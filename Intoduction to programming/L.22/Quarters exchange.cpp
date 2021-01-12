#include<iostream>
using namespace std;
int main(){
	int n, m, half_n, half_m, buf;
	cout << "Input n and m: ";
	cin >> n >> m;
	int a[n][m];
	half_n = n/2;
	half_m = m/2;
	cout << "Input elements: " << endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for (int i=0; i<half_n; i++){
		for (int j=0; j<half_m; j++){
			buf = a[i][j];
			a[i][j] = a[i+half_n][j+half_m];
			a[i+half_n][j+half_m] = buf;
		}
	}
	cout << "Output: " << endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

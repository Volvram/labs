#include<iostream>
using namespace std;
int main(){
	int n, m, buf;
	cout << "Input n and m: ";
	cin >> n >> m;
	int a[n][m];
	cout << "Input elements: " << endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for (int t=0; t<n; t++){
		for (int i=0; i<n-1; i++){
			if (a[i][0] > a[i+1][0]){
				for (int j=0; j<m; j++){
					buf = a[i][j];
					a[i][j] = a[i+1][j];
					a[i+1][j] = buf;
				}
			}
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

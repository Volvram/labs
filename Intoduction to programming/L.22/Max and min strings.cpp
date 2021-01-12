#include<iostream>
using namespace std;
int main(){
	int m, n, min, max, index_min, index_max, buf;
	cout << "Input n and m: ";
	cin >> n >> m;
	int a[n][m];
	cout << "Input elements: " << endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for (int i=0; i<n; i++){
		min = a[i][0];
		index_min = 0;
		max = a[i][1];
		index_max = 1;
		for (int j=0; j<m; j++){
			if (a[i][j] < min){
				min = a[i][j];
				index_min = j;
			}
			else if (a[i][j] > max){
				max = a[i][j];
				index_max = j;
			}
		}
		buf = a[i][index_min];
		a[i][index_min] = a[i][index_max];
		a[i][index_max] = buf;
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

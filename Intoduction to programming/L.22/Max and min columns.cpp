#include<iostream>
using namespace std;
int main(){
	int n, m, min, max, index_min, index_max, buf;
	cout << "Input n and m: ";
	cin >> n >> m;
	int a[n][m];
	cout << "Inuput elements: " << endl;;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	min = a[0][0];
	index_min = 0;
	max = a[0][0];
	index_max = 0;
	for (int i=0; i<n; i++){
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
	}
	for (int i=0; i<n; i++){
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

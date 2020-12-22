#include<iostream>
using namespace std;
int main(){
	int m, n, cnt=0, column_only_uneven=0;
	cout << "Input m and n: ";
	cin >> m >> n;
	int a[m][n];
	cout << "Input elements: ";
	for (int i=1; i<m+1; i++){
		for (int j=1; j<n+1; j++){
			cin >> a[i][j];
		}
	}
	for (int j=1; j<n+1; j++){
		for (int i=1; i<m+1; i++){
			if (a[i][j] % 2 == 0){
				cnt++;
			}
		}
		if (cnt == 0){
			column_only_uneven = j;
			break;
		}
		cnt=0;
	}
	cout << "Result: " << column_only_uneven;
	return 0;
}

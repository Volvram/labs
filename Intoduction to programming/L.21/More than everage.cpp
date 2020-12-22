#include<iostream>
using namespace std;
int main(){
	int m, n, cnt=0;
	float average=0;
	cout << "Input m and n: ";
	cin >> m >> n;
	int a[m][n];
	cout << "Input elements: ";
	for (int i=1; i<m+1; i++){
		for (int j=1; j<n+1; j++){
			cin >> a[i][j];
			average+=a[i][j];
		}
	}
	average = average/(m*n);
	for (int j=1; j<n+1; j++){
		for (int i=1; i<m+1; i++){
			if (a[i][j] > average){
				cnt++;
			}
		}
		cout << "Column" << " " << j << " " << "Count = " << cnt << endl;
		cnt=0;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int m, n, l = 0, p = 0, cnt=0, direction=1;
	cin >> m;
	n = m;
	int end = m;
	int a[m][m];
	for (int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	cout << endl << "Output: "<< endl;
	while (cnt != end*end){
		if (direction == 1){
			cout << "direction 1: ";
			for (int i=l; i<m; i++){
				cout << a[i][p] << " ";
				cnt++;
			}
			cout << endl;
			direction = 2;
			p++;
		}
		else if (direction == 2){
			cout << "direction 2: ";
			for (int j=p; j<n; j++){
				cout << a[m-1][j] << " ";
				cnt++;
			}
			cout << endl;
			direction = 3;
			m--;
		}
		else if (direction == 3){
			cout << "direction 3: ";
			for (int i=m-1; i>=l; i--){
				cout << a[i][n-1] << " ";
				cnt++;
			}
			cout << endl;
			direction = 4;
			n--;
		}
		else if (direction == 4){
			cout << "direction 4: ";
			for (int j=n-1; j>=p; j--){
				cout << a[l][j] << " ";
				cnt++;
			}
			cout << endl;
			direction = 1;
			l++;
		}
	}
	return 0;
}

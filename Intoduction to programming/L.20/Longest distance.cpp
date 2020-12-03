#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n, coordinate;
	cin >> n;
	float x[n], y[n], res;
	for (int i=0; i<n; i++){
		cin >> x[i] >> y[i];
	}
	coordinate = -1;
	res = 0;
	for (int i=0; i<n; i++){
		if (x[i] < 0 && y[i] > 0){
			if (sqrt(x[i] * x[i] + y[i] * y[i]) > res){
				coordinate = i;
				res = sqrt(x[i] * x[i] + y[i] * y[i]);
			}
		}
	}
	if (coordinate == -1){
		cout << "(" << 0 << ";" << 0 << ")";
	}
	else {
		cout << "(" << x[coordinate] << ";" << y[coordinate] << ")";
	}
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	float a, d;
	cin >> n >> a >> d;
	float arr[n];
	for (int i=0; i<n; i++){
		arr[i]=a*pow(d,i);
	}
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}

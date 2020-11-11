#include<iostream>
using namespace std;
int main(){
	int n, c=0;
	cin >> n;
	int a[n];
	for (int i=1; i<n+1; i++){
		cin >> a[i];
	}
	float b[n];
	for (int k=1; k<n+1; k++){
		b[k]=0;
	}
	for (int k=1; k<n+1; k++){
		for (int i=1; i<k+1; i++){
			b[k]+=a[i];
			c++;
		}
		b[k]/=c;
		c=0;
	}
	cout << "B: ";
	for (int k=1; k<n+1; k++){
		cout << b[k] << " ";
	}
	return 0;
}

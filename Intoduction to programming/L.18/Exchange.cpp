#include<iostream>
using namespace std;
int main(){
	int n, buf;
	cin >> n;
	int a[n], b[n];
	cout << "Input A:";
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	cout << "Input B:";
	for (int i=0; i<n; i++){
		cin >> b[i];
	}
	for (int i=0; i<n; i++){
		buf=a[i];
		a[i]=b[i];
		b[i]=buf;
	}
	cout << "A: ";
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl << "B: ";
	for (int i=0; i<n; i++){
		cout << b[i] << " ";
	}
	return 0;
}

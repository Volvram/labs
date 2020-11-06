#include<iostream>
using namespace std;
int main(){
	int n, uneven=1;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		a[i]=uneven;
		uneven+=2;
	}
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	return 0;
}

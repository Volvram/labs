#include<iostream>
using namespace std;
int main(){
	int n, min;
	cin >> n;
	int a[n];
	for (int i=1; i<n+1; i++){
		cin >> a[i];
	}
	min=a[2];
	for (int i=1; i<n+1; i++){
		if(i%2==0 && a[i]<min){
			min=a[i];
		}
	}
	cout << min;
	return 0;
}

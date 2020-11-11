#include<iostream>
using namespace std;
int main(){
	int n;
	float d=0;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	d=arr[1]-arr[0];
	for (int i=2; i<n; i++){
		if(arr[i]-arr[i-1]!=d){
			d=0;
			break;
		}
	}
	cout << d;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n, buf;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	for (int i=0; i<n-1; i++){
		if (arr[i]>arr[i+1]){
			buf=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=buf;
		}
	}
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}

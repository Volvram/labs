#include<iostream>
using namespace std;
int main(){
	int n, last_odd=0;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	for (int i=0; i<n; i++){
		if(arr[i]%2!=0){
			last_odd=arr[i];
		}
	}
	if (last_odd==0){
		cout << "No changes: ";
		for (int i=0; i<n; i++){
			cout << arr[i] << " ";
		}
	}
	else {
		for (int i=0; i<n; i++){
			if (arr[i]%2!=0){
				arr[i]+=last_odd;
			}
			cout << arr[i] << " ";
		}
	}
	return 0;
}

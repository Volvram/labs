#include<iostream>
using namespace std;
int main(){
	int n, min, max, num_min=0, num_max=0;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	min=arr[0];
	max=arr[0];
	for (int i=0; i<n; i++){
		if(arr[i]<min){
			min=arr[i];
			num_min=i;
		}
		else if(arr[i]>max){
			max=arr[i];
			num_max=i;
		}
	}
	if (num_min<num_max){
		for (int i=num_min+1; i<num_max; i++){
			arr[i]=0;
		}
	}
	else{
		for (int i=num_max+1; i<num_min; i++){
			arr[i]=0;
		}
	}
	cout << "New array: ";
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}

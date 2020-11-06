#include<iostream>
using namespace std;
int main(){
	int n, a, b, sum;
	cin >> n >> a >> b;
	int arr[n];
	arr[0]=a;
	arr[1]=b;
	sum = arr[0]+arr[1];
	for (int i=2; i<n; i++){
		arr[i]=sum;
		sum+=arr[i];
	}
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n, k, l, average=0, c=0;
	float result;
	cin >> n >> k >> l;
	int arr[n];
	for (int i=1; i<n+1; i++){
		cin >> arr[i];
	}
	for (int i=k; i<=l; i++){
		average+=arr[i];
		c++;
	}
	result= (float)average/c;
	cout << "Result=" << result;
	return 0;
}

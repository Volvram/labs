#include<iostream>
using namespace std;
int main(){
	int n, k=1, sum=1;
	cin >> n;
	while(sum<n){
		k++;
		sum+=k;
	}
	cout << "K=" << k << " " << "Sum=" << sum;
	return 0;
}

#include<iostream>
using namespace std;
float Fact2(int n){
	float res=1;
	if (n%2!=0){
		for (int i=1; i<=n; i=i+2){
			res*=i;
		}
	}
	else {
		for (int i=2; i<=n; i=i+2){
			res*=i;
		}
	}
	return res;
}
int main(){			// Counts factorials of 2 numbers
	int a, b;
	cin >> a >> b;
	cout << Fact2(a) << " " << Fact2(b);
	return 0;
}

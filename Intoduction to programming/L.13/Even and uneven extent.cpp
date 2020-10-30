#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a, r=0;
	int n;
	cin >> a >>n;
	for (int i=0; i<=n; i++){
		r=r+pow(-a,i);
	}
	cout << r;
	return 0;
}

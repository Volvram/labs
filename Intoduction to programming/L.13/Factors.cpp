#include<iostream>
using namespace std;
int main(){
	int n;
	float x=1, r=1;
	cin >> n;
	for (int i=0; i<n; i++){
		cout << x << " " << "*" << " ";
		x=x+0.1;
		r*=x;
	}
	cout << x << " " << "=" << " " << r;
	return 0;
}

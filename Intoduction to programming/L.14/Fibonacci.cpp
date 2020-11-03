#include<iostream>
using namespace std;
int main(){
	int n, k=2, f, con1=1, con2=1;
	cin >> n;
	while (f<n){
		f = con1 + con2;
		con1=con2;
		con2=f;
		k++;
	}
	cout << k;
	return 0;
}

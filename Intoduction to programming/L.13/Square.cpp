#include<iostream>
using namespace std;
int main(){
	int n, n2=0;
	cin >> n;
	for (int i=1; i<=n; i++){
		n2+=2*i-1;
		cout << n2 << " ";
	}
	cout << endl << "=" << n2;
	return 0;
}

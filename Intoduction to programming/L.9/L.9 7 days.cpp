#include<iostream>
using namespace std;
int main(){
	int k, n;
	cin >> k >> n;
	cout << (k + n) % 7 - 1;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int a, b, buf;
	cin >> a >> b;
	buf = a;
	a = b;
	b = buf;
	cout << "A=" << a << " " << "B=" << b;
	return 0;
}

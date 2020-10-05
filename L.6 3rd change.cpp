#include<iostream>
using namespace std;
int main(){
	int a, b, c, buf;
	cin >> a >> b >> c;
	buf = a;
	a = b;
	b = c;
	c = buf;
	cout << "A=" << a << " " << "B=" << b << " " << "C=" << c;
	return 0;
}

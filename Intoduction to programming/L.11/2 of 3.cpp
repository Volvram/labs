#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if (a>=c && b>=c) cout << "A+B=" << a+b;
	else if (b>=a && c>=a) cout << "B+C=" << b+c;
	else cout << "A+C=" << a+c;
	return 0;
}

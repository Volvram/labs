#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b, c;
	cin >> a;
	b=a*a*a; // 2 операции "*"
	c=b*b; // 1 операция "*"
	b=b*c*c; // 2 операции "*"
	cout << b ;
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b, c;
	cin >> a;
	b=a*a*a; // 2 �������� "*"
	c=b*b; // 1 �������� "*"
	b=b*c*c; // 2 �������� "*"
	cout << b ;
	return 0;
}

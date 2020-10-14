#include<iostream>
#include <cmath>
using namespace std;
int main(){
	float a1, b1, a2, b2, c1, c2, x, y, op, opx, opy;
	cin >> a1 >> b1 >> a2 >> b2 >> c1 >> c2;
	op=a1*b2-b1*a2;
	opx=c1*b2-b1*c2;
	opy=a1*c2-c1*a2;
	x=opx/op;
	y=opy/op;
	if (x==0){
		x=abs(x);
	}
	if (y==0){
		y=abs(y);
	}
	cout << "x=" << x << " " << "y=" << y;
	return 0;
}

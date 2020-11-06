#include<iostream>
using namespace std;
float RingS(float r1, float r2){
	float pi=3.14;
	return pi*r1*r1-pi*r2*r2;
}
int main(){
	float a1, a2, b1, b2, c1, c2;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	cout << RingS(a1, a2) << " " << RingS(b1, b2) << " " << RingS(c1, c2);
	return 0;
}

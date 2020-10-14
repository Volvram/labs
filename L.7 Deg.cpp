#include<iostream>
using namespace std;
int main(){
	int a_deg;
	float pi=3.14, a_rad;
	cin >> a_rad;
	a_deg = a_rad * 180/pi;
	cout << a_deg;
	return 0;
}

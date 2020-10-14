#include<iostream>
using namespace std;
int main(){
	float x, a, y;
	cin >> x >> a >> y;
	cout << "1kg=" << a/x << "rub" << " " << y << "kg=" << a/x*y << "rub";
	return 0;
}

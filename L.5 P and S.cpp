#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x1, y1, x2, y2, a, b;
	cin >> x1 >> y1 >> x2 >> y2;
	a = sqrt((y2-y1)*(y2-y1));
	b = sqrt((x2-x1)*(x2-x1));
	cout << "P=" << 2*a+2*b << " " << "S=" << a*b;
	return 0;
}

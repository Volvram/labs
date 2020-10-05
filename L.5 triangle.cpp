#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x1, y1, x2, y2, x3, y3, a, b, c;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	cout << "P=" << a+b+c << " " << "S=" << sqrt((a+b+c)/2*((a+b+c)/2 - a)*((a+b+c)/2 - b)*((a+b+c)/2 - c));
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float x1, y1, x2, y2, x3, y3; // A(X1,Y1); B(X2,Y2); C(X3,Y3)
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if (sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))<=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))){
		cout << "B" << " " << sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	}
	else cout << "C" << " " << sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	return 0;
}

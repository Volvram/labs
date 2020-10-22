#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a, b, c, ac, bc;
	cin >> a >> b >> c;
	ac = sqrt((c-a)*(c-a));
	bc = sqrt((c-b)*(c-b));
	cout << "AC=" << ac << " " << "BC=" << bc << " " << "AC+BC=" << ac + bc;
	return 0;
}

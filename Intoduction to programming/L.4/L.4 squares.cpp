#include<iostream>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float a, b;
	cin >> a >> b;
	cout << "a2 + b2 = " << a*a + b*b << endl ;
	cout << "a2 - b2 = " << a*a - b*b << endl ;
	cout << "a2 * b2 = " << (a*a) * (b*b) << endl ;
	cout << "a2 / b2 = " << (a*a) / (b*b);
	return 0;
}

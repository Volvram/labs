#include<iostream>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float a, b, s, p;
	cin >> a >> b;
	s = a * b;
	p = 2 * (a + b);
	cout << "S = " << s << " ";
	cout << "P = " << p;
	return 0;
}

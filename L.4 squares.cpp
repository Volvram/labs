#include<iostream>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float a, b;
	cin >> a >> b;
	cout << "сумма квадратов равна:" << a*a + b*b << endl ;
	cout << "разность квадратов равна:" << a*a - b*b << endl ;
	cout << "произведение квадратов равна:" << (a*a) * (b*b) << endl ;
	cout << "частное квадратов равно:" << (a*a) / (b*b);
	return 0;
}

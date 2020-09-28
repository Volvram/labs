#include<iostream>
#include<locale>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float a, b;
	cin >> a >> b;
	cout << "сумма модулей равна:" << abs(a) + abs(b) << endl;
	cout << "разность модулей равна:" << abs(a) - abs(b) << endl;
	cout << "произведение модулей равно:" << abs(a) * abs(b) << endl;
	cout << "частное модулей равно:" << abs(a) / abs(b);
	return 0;
}

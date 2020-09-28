#include<iostream>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float d, l;
	cin >> d;
	l = 3.14 * d;
	cout << "длина окружности равна:" << l;
	return 0;
}

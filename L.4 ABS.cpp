#include<iostream>
#include<locale>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float a, b;
	cin >> a >> b;
	cout << "����� ������� �����:" << abs(a) + abs(b) << endl;
	cout << "�������� ������� �����:" << abs(a) - abs(b) << endl;
	cout << "������������ ������� �����:" << abs(a) * abs(b) << endl;
	cout << "������� ������� �����:" << abs(a) / abs(b);
	return 0;
}

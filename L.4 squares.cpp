#include<iostream>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float a, b;
	cin >> a >> b;
	cout << "����� ��������� �����:" << a*a + b*b << endl ;
	cout << "�������� ��������� �����:" << a*a - b*b << endl ;
	cout << "������������ ��������� �����:" << (a*a) * (b*b) << endl ;
	cout << "������� ��������� �����:" << (a*a) / (b*b);
	return 0;
}

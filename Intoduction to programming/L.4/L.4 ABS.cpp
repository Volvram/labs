#include<iostream>
#include<locale>
#include<cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float a, b;
	cin >> a >> b;
	cout << "|a| + |b| = " << abs(a) + abs(b) << endl;
	cout << "|a| - |b| = " << abs(a) - abs(b) << endl;
	cout << "|a| * |b| = " << abs(a) * abs(b) << endl;
	cout << "|a| / |b| = " << abs(a) / abs(b);
	return 0;
}

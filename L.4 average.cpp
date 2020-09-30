#include<iostream>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	float a, b, average;
	cin >> a >> b;
	average = (a +b) / 2;
	cout << "average = " << average;
	return 0;
}

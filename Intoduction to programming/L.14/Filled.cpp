#include<iostream>
using namespace std;
int main(){
	float a, b, filled=0;
	cin >> a >> b;
	while (filled+b<=a){
		filled+=b;
	}
	cout << a-filled;
	return 0;
}

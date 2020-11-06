#include<iostream>
using namespace std;
int Sign(float x){
	if (x<0) return -1;
	else if (x==0) return 0;
	else return 1;
}
int main(){
	float a, b;
	cin >> a >> b;
	cout << Sign(a)+Sign(b);
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	float p, k=0, s=1000;
	cin >> p;
	p=p/100;
	while(s<=1100){
		s=s+s*p;
		k++;
	}
	cout << "Months:" << k << " " << "Sum:" << s;
	return 0;
}

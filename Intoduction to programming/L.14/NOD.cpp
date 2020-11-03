#include<iostream>
using namespace std;
int main(){
	int a, b, NOD;
	cin >> a >> b;
	while(a!=b){
		if (a>b){
			a=a-b;
		}
		else b=b-a;
	}
	cout << "NOD=" << a;
	return 0;
}

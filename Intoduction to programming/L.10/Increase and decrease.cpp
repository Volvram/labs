#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if ((a/100 > a%100/10 && a%100/10 > a%10) || (a%10 > a%100/10 && a%100/10 > a/100)) cout << "YES";
	else cout << "NO";
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if (c>a || c>b)cout << "not at all";
	else cout << (a/c) * (b/c);
	return 0;
}

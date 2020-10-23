#include<iostream>
using namespace std;
int main(){
	int x, y;
	cin >> x >> y;
	if (x>0 && y>0) cout << "1st quarter";
	else if (x<0 && y>0) cout << "2nd quarter";
	else if (x<0 && y<0) cout << "3rd quarter";
	else cout << "4th quarter";
	return 0;
}

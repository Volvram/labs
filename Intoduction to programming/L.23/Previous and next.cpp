#include<iostream>
using namespace std;
int main(){
	char c, p, n;
	cin >> c;
	cout << "Previous: " << (char)(c-1)<< endl;
	cout << "Next: " << (char)(c+1);
	return 0;
}

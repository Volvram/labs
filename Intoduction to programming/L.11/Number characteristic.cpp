#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a==0) cout << "zero number";
	else {
		if (a>0) {
			if (a%2==0) cout << "Positive even number";
			else cout << "Positive uneven number";
		}
		else{
			if (a%2==0) cout << "Negative even number";
			else cout << "Negative uneven number";
		}
	}
	return 0;
}

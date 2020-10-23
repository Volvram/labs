#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (a/10==0){
		if (a%2==0) cout << "Even single digit";
		else cout << "Uneven single digit";
	}
	else if (a/100==0){
		if (a%2==0) cout << "Even two-digit number";
		else cout << "Uneven two-digit number";
	}
	else {
		if (a%2==0) cout << "Even three-digit number";
		else cout << "Uneven three-digit number";
	}
	return 0;
}

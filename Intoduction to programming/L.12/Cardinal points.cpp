#include<iostream>
#include<locale>
#include<Windows.h>
using namespace std;
int main (){
	setlocale(LC_ALL,"Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c;
	int n;
	cin >> c >> n;
	if (c=='�'){
		if (n==0) cout << "�";
		else if (n==1) cout << "�";
		else cout << "�";
	}
	else if (c=='�'){
		if (n==0) cout << "�";
		else if (n==1) cout << "�";
		else cout << "C";
	}
	else if (c=='�'){
		if (n==0) cout << "�" ;
		else if (n==1) cout << "�";
		else cout << "�";
	}
	else {
		if (n==0) cout << "�";
		else if (n==1) cout << "C";
		else cout << "�";
	}
	return 0;
}

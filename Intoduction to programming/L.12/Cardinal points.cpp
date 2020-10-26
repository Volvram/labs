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
	if (c=='Ñ'){
		if (n==0) cout << "Ñ";
		else if (n==1) cout << "Ç";
		else cout << "Â";
	}
	else if (c=='Ç'){
		if (n==0) cout << "Ç";
		else if (n==1) cout << "Þ";
		else cout << "C";
	}
	else if (c=='Þ'){
		if (n==0) cout << "Þ" ;
		else if (n==1) cout << "Â";
		else cout << "Ç";
	}
	else {
		if (n==0) cout << "Â";
		else if (n==1) cout << "C";
		else cout << "Þ";
	}
	return 0;
}

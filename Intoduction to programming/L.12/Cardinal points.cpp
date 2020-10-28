#include<iostream>
using namespace std;
int main (){
	char c;
	int n;
	cin >> c >> n;
	if (c=='N'){		// North
		if (n==0) cout << "N";
		else if (n==1) cout << "W";
		else cout << "E";
	}
	else if (c=='W'){		// West	
		if (n==0) cout << "W";
		else if (n==1) cout << "S";
		else cout << "N";
	}
	else if (c=='S'){		// South
		if (n==0) cout << "S" ;
		else if (n==1) cout << "E";
		else cout << "W";
	}
	else {		// East
		if (n==0) cout << "E";
		else if (n==1) cout << "N";
		else cout << "S";
	}
	return 0;
}

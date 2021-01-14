#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	for (int i=1; i<=s.size(); i++){
		if (i%2 == 0) cout << s[i-1];
	}
	for (int i=s.size(); i>0; i--){
		if (i%2 != 0) cout << s[i-1];
	}
	return 0;
}

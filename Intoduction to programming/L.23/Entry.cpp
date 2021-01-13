#include<iostream>
#include<string>
using namespace std;
int main(){
	char c;
	string s;
	cin >> c;
	getline(cin, s);
	getline(cin, s);
	for (int i=0; i<s.size(); i++){
		if (c==s[i]){
			cout << s.substr(i, 1) << c;
		}
		else cout << s.substr(i, 1);
	}
	return 0;
}

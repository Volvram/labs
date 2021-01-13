#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	for (int i=0; i < s.size(); i++){
		if (i != s.size() - 1){
			cout << s.substr(i, 1) << " ";
		}
		else {
			cout << s.substr(i, 1);
		}
	}
	return 0;
}

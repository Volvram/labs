#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int cnt=0;
	getline(cin, s);
	for (int i=0; i<s.size(); i++){
		if ((int)s[i] == -96 || (int)s[i] == -91 || (int)s[i] == -15 || (int)s[i] == -88 || (int)s[i] == -82
		|| (int)s[i] == -29 || (int)s[i] == -21 || (int)s[i] == -19 || (int)s[i] == -18 || (int)s[i] == -17){
			cnt++;
		}
	}
	cout << "Number of vowels: " << cnt;
	return 0;
}

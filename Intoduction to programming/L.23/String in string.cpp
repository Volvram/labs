#include<iostream>
#include<string>
using namespace std;
int main(){
	int cnt=0, amount=0, i=0, j=0;
	string s, s0;
	getline(cin, s);
	getline(cin, s0);
	while(i <= s0.size() && j <= s.size()){
		if (s0[i] == s[j]){
			cnt++;
			i++;
			j++;
			if (cnt == s0.size()){
				amount++;
				cnt = 0;
				i=0;
			}
		}
		else {
			j++;
			i=0;
			cnt = 0;
		}
	}
	cout << amount;
	return 0;
}

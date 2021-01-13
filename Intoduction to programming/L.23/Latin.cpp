#include<iostream>
using namespace std;
int main(){
	char c[100];
	int cnt=0;
	gets(c);
	for (int i=0; c[i]!=NULL; i++){
		if (c[i] > 96 && c[i] < 125){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

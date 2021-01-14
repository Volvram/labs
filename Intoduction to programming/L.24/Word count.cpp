#include<iostream>
#include<string>
using namespace std;
int main(){
	int cnt=1, point1=0, point2;
	string s;
	getline(cin, s);
	point2=s.find_first_of(' ', point1);
	if (s.find(' ') != -1){
		while(1){
			point1 = point2;
			point2 = s.find_first_of(' ', point1+1);
			if (point1+1 != point2) cnt++;
			if (s.find_first_of(' ', point2+1) == -1) break;
		}
		cnt++;
	}
	cout << cnt;
	return 0;	
}

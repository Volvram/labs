#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int point1=0, point2=0;
	getline(cin, s);
	while(1){
		point1 = point2;
		point2 = s.find_first_of('\\', point2+1);
		if (s.find_first_of('\\', point2+1) == -1){
			point1 = point2;
			break;
		}
	}
	while(1){
		point2=s.find_first_of('.', point2+1);
		if (s.find_first_of('.', point2+1) == -1) break;
	}
	cout << s.substr(point1+1, point2-point1-1);
	return 0;
}

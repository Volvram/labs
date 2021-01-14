#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string s;
	int min_length, point1=0, point2=0;
	vector <string> v;
	getline(cin, s);
	if (s.find(' ', point1) == -1){
		v.push_back(s.substr(point1, s.size()));
	}
	else {
		while(1){
			point1 = point2;
			point2 = s.find_first_of(' ', point2+1);
			if (point1+1 != point2){
				if (point1 == 0){
					v.push_back(s.substr(point1, point2-point1));
				}
				else {
					v.push_back(s.substr(point1+1, point2-1-point1));
				}
			}
			if (s.find_first_of(' ', point2+1) == -1) break;
		}
		v.push_back(s.substr(point2+1, s.size()-point2));
	}
	min_length = v[0].size();
	for (int i=0; i<v.size(); i++) {
		if (v[i].size() < min_length) min_length = v[i].size();
	}
	cout << "Min length = " << min_length;
	return 0;
}

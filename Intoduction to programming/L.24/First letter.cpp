#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string s, word;
	int point1=0, point2=0;
	char letter;
	vector <string> v;
	getline(cin, s);
	if (s.find(' ') == -1){
		v.push_back(s);
	}
	else{
		while(1){
			point1 = point2;
			point2 = s.find_first_of(' ', point2+1);
			if (point1+1 != point2){
				if (point1 == 0) {
					v.push_back(s.substr(point1, point2-point1));
				}
				else v.push_back(s.substr(point1+1, point2-point1-1));
				v.push_back(" ");
			}
			else {
				v.push_back(s.substr(point1, point2-point1));
			}
			if (s.find_first_of(' ', point2+1) == -1){
				v.push_back(s.substr(point2+1, s.size()-point2));
				break;
			}
		}
	}
	for (int i=0; i<v.size(); i++){
		letter = v[i][0];
		for (int j=1; j<v[i].size(); j++){
			if (v[i][j] == letter){
				v[i][j] = '.';
			}
		}
	}
	s = "";
	cout << "Output: " << endl;
	for (int i=0; i<v.size(); i++){
		s+=v[i];
	}
	cout << s;
	return 0;
}

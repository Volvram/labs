#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<windows.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector <char> v;
	string s;
	cout << "Input text: " << endl;
	getline(cin, s);
	ofstream fout ("Space_is_alone.txt");
	fout << s;
	fout.close();
	char res[100000], buff[100000];
	ifstream fin("Space_is_alone.txt");
	if (!fin.is_open()){
		cout << "Error! ";
		return 1;
	}
	else{
		while(!fin.eof()){
			fin.getline(buff, 10000);
			v.push_back(buff[0]);
			for (int i=1; buff[i]!=NULL; i++){
				if (buff[i] == ' ' && buff[i-1] == ' ') continue;
				else v.push_back(buff[i]);
			}
		}
		for (int i=0; i<v.size(); i++){
			res[i] = v[i];
		}
		fout.open("Space_is_alone.txt");
		fout << res;
		fout.close();
		cout << "Open file Space_is_alone.txt for watching changes" << endl;
	}
	system("pause");
	return 0;
}

#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<locale>
using namespace std;
int main(){
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int point=0;
	ofstream fout ("After_space.txt");
	string s;
	char buff[100000];
	cout << "Input text: " << endl;
	getline(cin, s);
	fout << s;
	fout.close();
	ifstream fin ("After_space.txt");
	if (!fin.is_open()){
		cout << "File cannot be opened";
		return 1;
	}
	else {
		while(!fin.eof()){
			fin.getline(buff, 10000);
		}
		fin.close();
	}
	for (int i=0; buff[i] != NULL; i++){
		if (buff[i] == ' '){
			point = i;
			break;
		}
	}
	fout.open("After_space.txt");
	for (int i=point+1; buff[i]!=NULL; i++){
		fout << buff[i];
	}
	fout.close();
	cout << "Open file After_space.txt for watching changes" << endl;
	system("pause");
	return 0;
}

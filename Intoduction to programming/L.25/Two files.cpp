#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	char remember[100000], buff[100000];
	cout << "Input first text: " << endl;
	getline(cin, s);
	ofstream fout1("First_file.txt");
	fout1 << s;
	fout1.close();
	cout << "Input second text: " << endl;
	getline(cin, s);
	ofstream fout2("Second_file.txt");
	fout2 << s;
	fout2.close();
	ifstream fin1("First_file.txt");
	while(!fin1.eof()){
		fin1.getline(remember, 10000);
	}
	fin1.close();
	ifstream fin2("Second_file.txt");
	while(!fin2.eof()){
		fin2.getline(buff, 10000);
	}
	fin2.close();
	fout1.open("First_file.txt");
	fout1 << buff << remember;
	fout1.close();
	cout << "Open file First_file.txt  for watching changes" << endl;
	system("pause");
	return 0;
}

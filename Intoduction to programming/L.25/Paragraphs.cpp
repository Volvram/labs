#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char buff[100000];
	int cnt=0, paragraphs=0;
	ifstream fin("Paragraphs.txt");
	if (!fin.is_open()){
		cout << "Error! " << "Create file with name Paragraphs.txt in the same directory," << endl 
		<< "write something there and then restart the programm.";
		return 1;
	}
	while(!fin.eof()){
		fin.getline(buff, 10000);
		for (int i=0; buff[i] != NULL; i++){
			if (buff[i] == ' ') cnt++;
			else cnt=0;
			if (cnt == 5 && buff[i+1] != ' '){
				paragraphs++;
				cnt=0;
			}
			else if (cnt == 5 && buff[i+1] == ' '){
				cnt++;
				paragraphs++;
			}
		}
	}
	cout << "Amount of paragraphs: "<< paragraphs << endl;
	system("pause");
	return 0;
}

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	int point=0;
	char name[20];
	cout << "Input file name: " << endl;
	gets(name);
	for (int i=0; i<20; i++){
		if (name[i] == NULL){
			point = i;
			break;
		}
	}
	name[point] = '.';
	name[point+1] = 't';
	name[point+2] = 'x';
	name[point+3] = 't';
	int n, k;
	cout << "Input n and k: " << endl;
	cin >> n >> k;
	ofstream fout(name);
	for (int i=0; i<n; i++){
		for (int j=0; j<k; j++){
			fout << "*";
		}
		fout << endl;
	}
	fout.close();
	cout << "Open your file for watching changes: " << endl;
	system("pause");
	return 0;
}

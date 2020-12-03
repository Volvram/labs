#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, count=1, series;
	cin >> n;
	int a[n];
	vector <int> b;
	vector <int> c;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	series=a[0];
	for(int i=1; i<n; i++){
		if (a[i] != series){
			c.push_back(series);
			b.push_back(count);
			series = a[i];
			count=1;	
		}
		else {
			count++;
		}
	}
	c.push_back(series);
	b.push_back(count);
	cout << "B:";
	for(int i=0; i<b.size(); i++){
		cout << b[i] << " ";
	}
	cout << endl;
	cout << "C:";
	for(int i=0; i<c.size(); i++){
		cout << c[i] << " ";
	}
	return 0;
}

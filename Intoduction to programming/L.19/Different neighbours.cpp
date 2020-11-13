#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, temp;
	cin >> n;
	int a[n];
	vector <int> v;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	v.push_back(a[0]);
	for (int i=1; i<n; i++){
		if (a[i]!=a[i-1]){
			v.push_back(a[i]);
		}
	}
	for (int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}

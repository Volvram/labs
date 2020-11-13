#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	vector <int> v;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int i=0; i<n; i++){
		v.push_back(a[i]);
		if (a[i]<0){
			v.push_back(0);
		}
	}
	for (int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}

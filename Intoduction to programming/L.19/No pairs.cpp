#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, k=0;
	cin >> n;
	int a[n];
	vector <int> v;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i!=j){
				if(a[i]==a[j]){
					k++;
				}
			}
		}
		if (k!=1){
			v.push_back(a[i]);
		}
		k=0;
	}
	for (int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}

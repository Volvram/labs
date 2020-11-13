#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, min, max, num_min=0, num_max=0;
	cin >> n;
	int a[n];
	vector <int> v;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	min=a[0];
	max=a[0];
	for (int i=0; i<n; i++){
		if (a[i]<min){
			min = a[i];
			num_min=i;
		}
		else if (a[i]>max){
			max=a[i];
			num_max=i;
		}
	}
	for (int i=0; i<n; i++){
		if(i==num_min){
			v.push_back(0);
		}
		v.push_back(a[i]);
		if (i==num_max){
			v.push_back(0);
		}
	}
	for (int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}

#include<iostream>
#include<stack>
using namespace std;
int main(){
	int n, l, k, count=1, series;
	cin >> n >> l;
	int a[n];
	stack <int> s;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	series=a[0];
	s.push(a[0]);
	for(int i=1; i<n; i++){
		if(a[i] != series){
			if(count > l){
				for(int j=count; j>0; j--){
					s.pop();
				}
				s.push(0);
			}
			s.push(a[i]);
			count = 1;
			series = a[i];
		}
		else{
			count++;
			s.push(a[i]);
		}
	}
	if(count > l){
		while(s.top() == series){
			s.pop();
		}
		s.push(0);
	}
	k = s.size();
	int res[k];
	for(int i=k-1; i>=0; i--){
		res[i] = s.top();
		s.pop();
	}
	for(int i = 0; i < k; i++){
		cout << res[i] << " ";
	}
	return 0;
}

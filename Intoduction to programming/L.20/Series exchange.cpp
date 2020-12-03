#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, k, k_series, k_amount=0, count = 1, last_count, series, last_series, last_amount = 0;
	cin >> n >> k;
	int a[n];
	vector <int> v;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	series = a[0];
	last_series = a[n-1];
	for (int i=n-1; i>=0; i--){		//finding amount of elements of last series
		if (a[i] == last_series){
			last_amount++;
		}
		else break;
	}
	for (int i=0; i<n; i++){		//finding amount of elements of "k' series
		if (a[i] != series){
			count++;
			series=a[i];
		}
		if (count == k){
			k_amount++;
			k_series=a[i];
		}
	}
	last_count = count;
	count = 1;
	series = a[0];
	for (int i=0; i<n; i++){
		if (a[i] != series){
			count++;
			series = a[i];
		}
		if (count == k){		//found "k" series
			for (int j=0; j<last_amount; j++){		//adding last series in array
				v.push_back(last_series);
			}
			i+=k_amount;		//skip this series
			count++;
		}
		if (i == n-last_amount){		//found last series
			for (int j=0; j<k_amount; j++){			//adding "k" series in array
				v.push_back(k_series);
			}
			i+=last_amount;			//skip this series
		}
		else {
			v.push_back(a[i]);
		}
	}
	cout << "Changing last and k series: ";
	for (int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}

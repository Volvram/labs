#include<iostream>
#include<cmath>
using namespace std;
float side (float a, float b, float a1, float b1){		//side finding function
	return sqrt((a-a1)*(a-a1) + (b-b1)*(b-b1));
}
float perimeter (float a, float b, float a1, float b1, float a2, float b2){		//perimeter finding function
	return side (a, b, a1, b1) + side (a1, b1, a2, b2) + side (a2, b2, a, b);
}
int main(){
	int n, index1=-3, index2=-2, index3=-1;
	cin >> n;
	float x[n], y[n], res=0;
	for (int i=0; i<n; i++){
		cin >> x[i] >> y[i];
	}
	for (int i=0; i<n-2; i++){
		for (int j=i+1; j<n-1; j++){
			for (int k=j+1; k<n; k++){
				if (perimeter(x[i], y[i], x[j], y[j], x[k], y[k]) > res){
					res = perimeter(x[i], y[i], x[j], y[j], x[k], y[k]);
					index1 = i;
					index2 = j;
					index3 = k;
				}
			}
		}
	}
	cout << "Perimeter = " << res << endl;
	cout << "Points: ";
	cout << "(" << x[index1] << ";" << y[index1] << ")" << " ";
	cout << "(" << x[index2] << ";" << y[index2] << ")" << " ";
	cout << "(" << x[index3] << ";" << y[index3] << ")";
	return 0;
}

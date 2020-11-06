#include<iostream>
using namespace std;
float PowerA3(float a){
	float b=a*a*a;
	return b;
}
int main(){
	float c, d, e, f, g;
	cin >> c >> d >> e >> f >> g;
	cout << PowerA3(c) << " " << PowerA3(d) << " " << PowerA3(e) << " " << PowerA3(f) << " " << PowerA3(g);
	return 0;
}

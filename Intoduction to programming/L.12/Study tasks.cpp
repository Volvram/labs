#include<iostream>
using namespace std;
int units_in_dozens(int a){		// function in function dozens(a) if dozens starts with 2
	if (a%10==1) cout << "-one";
	else if (a%10==2) cout << "-two";
	else if (a%10==3) cout << "-three";
	else if (a%10==4) cout << "-four";
	else if (a%10==5) cout << "-five";
	else if (a%10==6) cout << "-six";
	else if (a%10==7) cout << "-seven";
	else if (a%10==8) cout << "-eight";
	else if (a%10==9) cout << "-nine";
}
int dozens(int a){
	if (a/10==1){
		if (a%10==0) cout << "Ten";
		else if (a%10==1) cout << "Eleven";
		else if (a%10==2) cout << "Twelve";
		else if (a%10==3) cout << "Thirteen";
		else if (a%10==4) cout << "Fourteen";
		else if (a%10==5) cout << "Fifteen";
		else if (a%10==6) cout << "Sixteen";
		else if (a%10==7) cout << "Seventeen";
		else if (a%10==8) cout << "Eighteen";
		else if (a%10==9) cout << "Nineteen";
	}
	else if (a/10==2){
		cout << "Twenty";
		units_in_dozens(a);
	}
	else if (a/10==3){
		cout << "Thirty";
		units_in_dozens(a);
	}
	else cout << "Fourty";
}
int main(){
	int a;
	cin >> a;
	dozens(a);
	cout << " " << "study tasks";
	return 0;
}

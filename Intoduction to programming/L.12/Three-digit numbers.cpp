#include<iostream>
using namespace std;
int units(int a) {		// if Number without dozens
		if (a%10==1) cout << " " << "and one"; // candition does not include 0, therefore, programm will write only hundreds
		else if (a%10==2) cout << " " << "and two";
		else if (a%10==3) cout << " " << "and three";
		else if (a%10==4) cout << " " << "and four";
		else if (a%10==5) cout << " " << "and five";
		else if (a%10==6) cout << " " << "and six";
		else if (a%10==7) cout << " " << "and seven";
		else if (a%10==8) cout << " " << "and eight";
		else if (a%10==9) cout << " " << "and nine";
}
int units_in_dozens(int a) {		// function in function dozens(a) if dozens starts with 2
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
int dozens(int a) {		// if Number with dozens
		if (a/10%10==1)	{		// if dozen = 1
			if (a%10==0) cout << " " << "ten";
			else if (a%10==1) cout << " " << "eleven";
			else if (a%10==2) cout << " " << "twelve";
			else if (a%10==3) cout << " " << "thirteen";
			else if (a%10==4) cout << " " << "fourteen";
			else if (a%10==5) cout << " " << "fifteen";
			else if (a%10==6) cout << " " << "sixteen";
			else if (a%10==7) cout << " " << "seventeen";
			else if (a%10==8) cout << " " << "eighteen";
			else if (a%10==9) cout << " " << "nineteen";
		}
		else if (a/10%10==2){
			cout << " " << "twenty";
			units_in_dozens(a);
		}
				else if (a/10%10==3){
			cout << " " << "thirty";	
			units_in_dozens(a);
		}
				else if (a/10%10==4){
			cout << " " << "fourty";	
			units_in_dozens(a);
		}
				else if (a/10%10==5){
			cout << " " << "fifty";	
			units_in_dozens(a);
		}
				else if (a/10%10==6){
			cout << " " << "sixty";	
			units_in_dozens(a);
		}
				else if (a/10%10==7){
			cout << " " << "seventy";	
			units_in_dozens(a);
		}
				else if (a/10%10==8){
			cout << " " << "eighty";	
			units_in_dozens(a);
		}
				else if (a/10%10==9){
			cout << " " << "ninety";	
			units_in_dozens(a);
		}	
}
int main(){
	int a;
	cin >> a;
	if (a/100==1){		// Hundred starts with 1
		cout << "one hundred";
		if (a/10%10==0){		// Number without dozens => call function units(a)
			units(a);
		}
		else dozens(a);		// Number with dozens => call function dozens(a)
	}
	else if (a/100==2){
		cout << "two hundred";
		if (a/10%10==0){
			units(a);
		}
		else dozens(a);
	}
	else if (a/100==3){
		cout << "three hundred";
		if (a/10%10==0){
			units(a);
		}
		else dozens(a);
	}
	else if (a/100==4){
		cout << "four hundred";
		if (a/10%10==0){
			units(a);
		}
		else dozens(a);
	}
	else if (a/100==5){
		cout << "five hundred";
		if (a/10%10==0){
			units(a);
		}
		else dozens(a);
	}
	else if (a/100==6){
		cout << "six hundred";
		if (a/10%10==0){
			units(a);
		}
		else dozens(a);
	}
	else if (a/100==7){
		cout << "seven hundred";
		if (a/10%10==0){
			units(a);
		}
		else dozens(a);
	}
	else if (a/100==8){
		cout << "eight hundred";
		if (a/10%10==0){
			units(a);
		}
		else dozens(a);
	}
	else if (a/100==9){
		cout << "nine hundred";
		if (a/10%10==0){
			units(a);
		}
		else dozens(a);
	}
	return 0;
}

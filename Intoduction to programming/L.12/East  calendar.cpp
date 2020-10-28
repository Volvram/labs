#include<iostream>
using namespace std;
int animal(int year){
	if (year%12==4) cout << " " << "rat";
	else if (year%12==5) cout << " " << "cow";
	else if (year%12==6) cout << " " << "tiger";
	else if (year%12==7) cout << " " << "rabbit";
	else if (year%12==8) cout << " " << "dragon";
	else if (year%12==9) cout << " " << "snake";
	else if (year%12==10) cout << " " << "horse";
	else if (year%12==11) cout << " " << "sheep";
	else if (year%12==0) cout << " " << "monkey";
	else if (year%12==1) cout << " " << "chicken";
	else if (year%12==2) cout << " " << "dog";
	else if (year%12==3) cout << " " << "pig";
}
int main(){
	int year;
	cin >> year;
	cout << "Year of the";
	if (year%10==4 || year%10==5){
		cout << " " << "green";
		animal(year);
	}
	else if (year%10==6 || year%10==7){
		cout << " " << "red";
		animal(year);
	}
	else if (year%10==8 || year%10==9){
		cout << " " << "yellow";
		animal(year);
	}
	else if (year%10==0 || year%10==1){
		cout << " " << "white";
		animal(year);
	}
	else {
		cout << " " << "black";
		animal(year);
	}
	return 0;
}

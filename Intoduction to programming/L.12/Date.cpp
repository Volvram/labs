#include<iostream>
using namespace std;
int main(){
	int day, month;
	string d;
	cin >> day >> month;
	if (day==1) d="First";
	if (day==2) d="Second";
	if (day==3) d= "Third";
	if (day==4) d="Fourth";
	if (day==5) d= "Fifth";
	if (day==6) d="Sixth";
	if (day==7) d="Seventh";
	if (day==8) d="Eighth";
	if (day==9) d="Nineth";
	if (day==10) d="Tenth";
	if (day==11) d="Eleventh";
	if (day==12) d="Twelveth";
	if (day==13) d="Thirteenth";
	if (day==14) d="Fourteenth";
	if (day==15) d="Fifteenth";
	if (day==16) d="Sixteenth";
	if (day==17) d="Seventeenth";
	if (day==18) d="Eighteenth";
	if (day==19) d="Nineteenth";
	if (day==20) d="Twentieth";
	if (day==21) d="Twenty-first";
	if (day==22) d="Twenty-second";
	if (day==23) d="Twenty-third";
	if (day==24) d="Twenty-fourth";
	if (day==25) d="Twenty-fifth";
	if (day==26) d= "Twenty-sixth";
	if (day==27) d="Twenty-seventh";
	if (day==28) d="Twenty-eighth";
	if (day==29) d="Twenty-nineth";
	if (day==30) d="Thirtieth";
	if (day==31) d="Thirty-first"; 
	if (month==1) cout <<  d << " " << "January";
	else if (month==2 && day<=29) cout << d << " " << "February";
	else if (month==3) cout << "March";
	else if (month==4 && day<=30) cout << d << " " << "April";
	else if (month==5) cout << "May";
	else if (month==6 && day<=30) cout << d << " " << "June";
	else if (month==7) cout << d << " " << "July";
	else if (month==8) cout << d << " " << "August";
	else if (month==9 && day<=30) cout << d << " " << "September";
	else if (month==10) cout << d << " " << "October";
	else if (month==11 && day<=30) cout << d << " " << "November";
	else if (month==12) cout << d << " " << "December";
	else cout << "Such date does not exist";
	return 0;
}

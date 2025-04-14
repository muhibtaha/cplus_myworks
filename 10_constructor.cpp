#include <iostream>
using namespace std;
#include <cstdlib>

class DayOfYear
{
public:
	DayOfYear(int monthValue, int dayValue);
	
	DayOfYear(int monthValue);
	
	DayOfYear();
	
	void input();
	void output();
	int getMonthNumber();
	int getDay();
	
private:	
	int month;
	int day;
	void testDate();
};	


DayOfYear::DayOfYear(int monthValue, int dayValue){

month=monthValue;
day=dayValue;
testDate();
}



DayOfYear::DayOfYear(int monthValue): month(monthValue), day(1){

testDate();
}


DayOfYear::DayOfYear(): month(1), day(1){

}

void DayOfYear::output() {
    string monthName;
    
    switch (month) {
        case 1:  monthName = "Ocak"; break;
        case 2:  monthName = "Subat"; break;
        case 3:  monthName = "Mart"; break;
        case 4:  monthName = "Nisan"; break;
        case 5:  monthName = "Mayis"; break;
        case 6:  monthName = "Haziran"; break;
        case 7:  monthName = "Temmuz"; break;
        case 8:  monthName = "Agustos"; break;
        case 9:  monthName = "Eylul"; break;
        case 10: monthName = "Ekim"; break;
        case 11: monthName = "Kasim"; break;
        case 12: monthName = "Aralik"; break;
        default: monthName = "Bilinmeyen"; // testDate() zaten kontrol ediyor
    }
    
    cout << day << " " << monthName << endl;
}
void DayOfYear:: testDate(){
 if((month<1)|| (month>12)){ cout<<"Illegal month value!\n";
 			     exit(1);
 				}

 if((day<1)||(day>31)){ cout<<"Illegal day\n";
 			exit(1);
 			}
 	
}


int main(){

	DayOfYear date1(2,21), date2(5), date3;
	cout<<"Initialized dates:\n";
	date1.output(); cout<<endl;
	date2.output(); cout<<endl;
	date3.output(); cout<<endl;
	
	date1 = DayOfYear(10, 31);
	cout<<"day1 reset to following:\n";
	date1.output(); cout << endl;
	return 0;




















}







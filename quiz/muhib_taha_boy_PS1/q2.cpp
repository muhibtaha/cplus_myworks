#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void change(int& current_player){
current_player= abs(current_player-1);
}

int humanTurn(int& humanTotalScore, int &current_player) {
char choice;
int number=0, raund_number=0;

cout<< "for roll press r, for hold press h"<< endl;
cin >> choice;



while(choice=='r') {

if(choice=='r') {
		srand(time(0));
		number= rand()%6 +1;
		cout <<number<< endl; //CONTROL
		raund_number+=number;
		if(number==1) {change(current_player);
				raund_number=0;
				return 1;}
			}


cout<< "for roll press r, for hold press h"<< endl;
cin >> choice;

}

if(choice=='h')	{ 	
			change(current_player);		
			humanTotalScore+=raund_number;
			return 1;
	
				}
return 1;
}






int computerTurn(int& computerTotalScore, int &current_player){

int number=0, raund_number=0;
	
		srand(time(0));
		number= rand()%6 +1;
		
	while(raund_number<20){
		if(number+raund_number+computerTotalScore == 100) { //control it higher than 20, written like that because total score still not updated
		
		cout<< "Computer wins" << endl;
		computerTotalScore+=raund_number+number;
		return 1;
		}
		
		if(number==1) {change(current_player);
			        raund_number=0;
			        return 1;}
			        
			
			else { raund_number+=number;
						number= rand()%6 +1;}	        
			        
			        
				

}
			change(current_player);		
computerTotalScore+= raund_number;

return 1;
}

int main(){

int current_player=1; //first human always

int humanTotalScore=0, computerTotalScore=0;


while(humanTotalScore<100 && computerTotalScore<100){
cout<< "\n" << "human:"<< humanTotalScore << "\n"<< "computer" <<computerTotalScore << endl;
cout<< " \n"<< "human turn"<< endl;
humanTurn(humanTotalScore, current_player);
cout << humanTotalScore;

cout<< "\n"<< "computer turn"<< endl;
computerTurn(computerTotalScore, current_player);
cout << computerTotalScore;
}

if(humanTotalScore>=100) cout << "Player win!" << endl;
if(computerTotalScore>=100) cout << "Computer win" << endl;
return 0;
}

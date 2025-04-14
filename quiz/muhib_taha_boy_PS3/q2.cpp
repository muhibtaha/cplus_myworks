#include <iostream>
using namespace std;
#include <vector>


int main(){

int i, current, numSuitors;

cout<< "Enter the mub of suitors" << endl;
cin >> numSuitors;

vector<int> suitors(numSuitors);

for(int i=0; i<numSuitors; i++){

suitors[i] = i+1;

}


if (numSuitors <=0)
	cout << "Not enough suitors\n";

else if(numSuitors == 1) cout<< "You would stard first in line \n";

else {

	current=0;
	
	while(suitors.size()>1){
	
	for(i=0; i<2; i++){
	
	
		current++;
	
	if(current == suitors.size()) current=0;
	
	
	
	
       }
	        suitors.erase(suitors.begin() + current); // Eliminate the suitor
		if(current == suitors.size()) current=0;

    
	
	
	}
	
	cout<< "To win the princess, you should stand in position " << suitors[0]<< endl;
}


return 0;
}








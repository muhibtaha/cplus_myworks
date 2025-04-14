#include <iostream>
#include <cstdlib>
using namespace std;

class HotDogStand
{

public:
	HotDogStand();
	HotDogStand(int newID, int newNumSold);
	int getID();
	void SetID(int newID);
	void JustSold();
	int GetNumSold();
	static int GetTotalSold();
	
	
private:
	static int totalSold;
	int numSold;
	int ID;	
	
};

int HotDogStand::totalSold = 0;

HotDogStand::HotDogStand(int newID, int newNumSold){

	ID= newID;
	numSold= newNumSold;
	totalSold+= newNumSold;
}

HotDogStand::HotDogStand(){
	ID=0;
	numSold=0;


}


int HotDogStand::getID(){

return ID;
}

void HotDogStand::SetID(int newID){
ID= newID;
}


void HotDogStand::JustSold() {
    numSold++;
    totalSold++;
}

int HotDogStand::GetNumSold() {
    return numSold;
}

int HotDogStand::GetTotalSold() {
    return totalSold;
}


int main(){


HotDogStand stand1(1,5);
HotDogStand stand2(2, 200);
HotDogStand stand3;

stand3.SetID(3);

stand1.JustSold();
stand1.JustSold();

stand2.JustSold();
stand2.JustSold();
stand2.JustSold();


stand3.JustSold();
stand3.JustSold();
stand3.JustSold();
stand3.JustSold();
stand3.JustSold();

cout<< "Stand " << stand1.getID() << " sold " << stand1.GetNumSold() << endl;
cout<< "Stand " << stand2.getID() << " sold " << stand2.GetNumSold() << endl;
cout<< "Stand " << stand3.getID() << " sold " << stand3.GetNumSold() << endl;
cout<< "Total " << HotDogStand::GetTotalSold() << " sold " << endl;
}



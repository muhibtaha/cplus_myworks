#include <iostream>
#include <string>
using namespace std;
#include <typeinfo>
#include <fstream>

int main() {

	auto x=3;
	cout << "Type is " << typeid(x).name() << endl;
 
 	int8_t y =66; //it gives us ASCII values as examples it gives us A 
	cout << "Y is:" << y << endl;

	double z=12.5;
	z= static_cast<int>(z); //.5 has lost cause of we decline z as integer z 
	cout << "Type of Z is: " << typeid(z).name() << "and z is : " << z << endl;


	double t=12.5; //similar thing
	t=(int)t/2;
	cout << "Type of Z is: " << typeid(t).name() << "and z is : " << (double)t << endl;


	double k;
	cin >> k;
	cout << "\n K is "<< k;
	
	cout.setf(ios::fixed); // say c++ what you exactly how many number you want after point
	cout.setf(ios::showpoint);
	cout.precision(2); 
	
	cout<< "\n Fixed K is " << k<< endl;
	
	ifstream file;  //way of the open file
	file.open("readme.txt");
	

	string h;
		while(file>> h) cout<< h<< " ";
	
	file.close();
	
	//cout << "X got from file is : " << x << endl;
	
 return 0;



}

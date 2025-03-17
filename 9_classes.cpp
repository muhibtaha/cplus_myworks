#include <iostream>
#include <string>

//class
class genders{
	public:
	int life_calculator();
	int age;
	int weight;
	int height;
	float man_cons=0.79;
	float woman_cons=1.1;
	float rest;


};


class lessons{
	public: 
		std::string math= "math202";
		std::string cse= "cse242";

	private:
		int math_note;
		int cse_note =50;	









};


int genders::life_calculator(){

	rest=(60-age)* (20/static_cast<double>(weight))*(180/static_cast<double>(height));
	std::cout<< (60-age)* (20/static_cast<double>(weight))*(180/static_cast<double>(height))<<std::endl; 


return 1;
}


int main(){
	
		genders man, woman;
		std::cin>> man.age;
		std::cin>> man.weight;
		std::cin>> man.height;
		man.life_calculator();


		lessons taha;
		std::cout<<taha.math;
		std::cin>>taha.math_note;
		
		std::cout<< man.rest;

}

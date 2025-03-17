#include <iostream>

int main() {

 	/*//calculator
	  double gallon;
	  double ml;
	  
	  double k = 3785.42; //1 gallon = k . ml
	  
	  
	  std::cout << "Please give how much mililitres \n";
	  std::cin >> ml ;
	  
	  std:: cout << ml << "ml is " << ml/k << " gallon" << std::endl;
	  
	  std:: cout << "And you need " << 3785.42/ml << " packet for full a gallon \n";
	  
	  
	  
	 //increase calculator 
	  float sales, profit;
	  std:: cout << "Please enter sales and profit previous year respectivelty" <<std:: endl;
	  std:: cin >> sales >> profit;
	  
	  const int sales_inc= 13;
	  const int profit_inc =27;
	  
	  
	  std:: cout << "New sales is "<< sales+sales*sales_inc/100 << "and new profit is " << profit+ profit*profit_inc/100 << std::endl ;
	  
	*/


	//babblyon algo.
	
	double guess, r, n;
	
	std::cout << " Give a number for root \n";
	std::cin >> n;
	
	guess= n/2;
	
	for(int i=0; i<5; i++){
	r= n/guess;
	guess= (guess+r)/2;}
	
	/*r= n/guess;
	guess= (guess+r)/2
;
	
	r= n/guess;
	guess= (guess+r)/2;
	
	r= n/guess;
	guess= (guess+r)/2;
	
	r= n/guess;
	guess= (guess+r)/2;*/
	
	std:: cout << "root of "<< n << " is " << guess << std::endl;  
	
	
	
	
	return 0;












}


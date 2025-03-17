#include <iostream>
using namespace std;
#include <typeinfo> // Required for typeid
#include <string>


int main() {

	int number;
	decltype(number*3.5) y(1993.4); // y nin türünü bu ikisinin çarpımına göre atıyor sonra y= 2.9 demekle aynı şeyi yaptık
	
	cout<< " Type of y : " << typeid(y).name;
	cout << "Hello reader. \n"
	    << "Welcome\n";
	    
	   cout << " My friend \n";
	   
	   //scanf lemek
	  std::cin >> number;
	  
	  if(nmber <3)
	  cout << "Numbeer is smaller than 3 " << endl;
	  
	  //type'ını yazdırmak
	  std::cout << " Typpe of number: " << typeid(number).name() <<std::endl;
	  	  cout << " Typpe of Y: " << typeid(y).name() <<endl;
	  	  

	 cout << "Y is :" << y 	;
	  	  
	 string text;
	 text= "merhaba";
	 
	 string s = R"(\t\\t\n)"; //bu şekilde slaşların özel işlevi kayboluyor bi tane yazsak yetiyor

	 std:: cout << s;	  
	 s = "\\t\\\\t\\n";
	 	  
	 
	 std:: cout << s;	  
	
	
	const int x =10;
	// x=5; diye düzeltemem
	  return 0;
	


}

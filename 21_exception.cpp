#include <iostream>
using namespace std;
int main()
{

int number, divider;
double result;
try
{
	cout<< "Enter number\n";
	cin>> number;
	cout << "Enter divider\n";
	cin >> divider;
	
	if(divider==0) throw(divider);
	
	result= number/static_cast<double>(divider);
	cout << "result is "<< result <<endl;
	
	


}

catch (int e){

 cout<< "if you try to divide a number to " << e << " it s undefined. But try use limit." << endl;


}


return 0;

}



#include <iostream>
#include <stdexcept>

void kontrolEt(int yas, double bakiye) {
    if (yas < 18)
        throw std::string("18 yaşından küçüksünüz.");
    if (bakiye < 0)
        throw std::runtime_error("Negatif bakiye hatası.");
    if (bakiye == 0)
        throw 0; // int tipinde hata
}

int main() {
    try {
        kontrolEt(17, -5.0);
    }
    catch (const std::string& e) {
        std::cout << "String hatası: " << e << "\n";
    }
    catch (const std::runtime_error& e) {
        std::cout << "Runtime hatası: " << e.what() << "\n";
    }
    catch (int e) {
        std::cout << "Sayısal hata: " << e << "\n";
    }
    catch (...) {
        std::cout << "Bilinmeyen bir hata oluştu.\n";
    }

    return 0;
}


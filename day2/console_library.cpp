#include <iostream>
#include <string>
int main(){



/*char a,b,c;
a= 'b';
b= 'c';
c= a;
std::cout << a <<b << c << 'c' << std::endl;*/

/*int number = (1/3) *3;
std::cout << "(1/3) *3 equal to " << number;*/


/*int a,b;

std::cin >> a >>b;

std::cout << a << "/" <<b <<" is " <<(a/b)+((float)(a%b)/b) << std::endl; 

std::cout << a << "/" <<b <<" is " <<(a/b)+((a%b)/static_cast<double>(b)) << std::endl; 
return 0;*/



/*std::cout.setf(std::ios::fixed);  //şekil ayarlama
std::cout.setf(std::ios::showpoint);
std::cout.precision(2);
double price = 79.7;
std::cout << "The price is $" << price << std::endl;
std::cerr<< "Bu bir hata değil \n"; //hata mesajları için cout
*/



/*
cout.setf(ios::fixed); //ondalıklı sayıya çevirir
cout.setf(ios::showpoint); //tam sayıysa bile .000 yazar
cout.precision(3); //ondalık sayı basamagını gösterir kaç tane olacak
double x(2.55555);
cout<< x << endl;


cout.precision(3);//bu sadece anlamlı sayı miktarını belirtir ex: 123.23 için sadece 123 ex: 0.001234 için 0.00123 şeklinde sonuç verir


    cout << "Enter your first and last name." << endl;
    getline(cin, fullName); // Use getline to read the full name including spaces
**/


/* stringle ilgili fonksiyonlar
    // String oluşturma
    string str = "Hello, World!";
    string str2 = " C++ Programming";

    // Length - String uzunluğunu almak
    cout << "Length of str: " << str.length() << endl;  // 13
    cout << "Length of str2: " << str2.length() << endl;  // 17

    // Append - String'e başka bir string eklemek
    str.append(str2);
    cout << "After append: " << str << endl;  // Hello, World! C++ Programming

    // Compare - İki stringi karşılaştırmak
    int result = str.compare(str2);
    cout << "Comparison result: " << result << endl;  // Non-zero if unequal

    // Substr - String'in bir alt kümesini almak
    string sub = str.substr(7, 5);  // 7. index'ten başlayarak 5 karakter alır
    cout << "Substring: " << sub << endl;  // World

    // Find - Bir karakterin veya substring'in pozisyonunu bulmak
    size_t pos = str.find("C++");
    if (pos != string::npos) {
        cout << "Found 'C++' at position: " << pos << endl;  // Position of 'C++'
    } else {
        cout << "'C++' not found!" << endl;
    }

    // Erase - String'den bir kısmı silmek
    str.erase(7, 5);  // 7. index'ten başlayarak 5 karakter siler
    cout << "After erase: " << str << endl;  // Hello,  Programming

    // Replace - String'in bir kısmını değiştirmek
    str.replace(7, 11, "C++ Programming");  // 7. index'ten başlayarak 11 karakteri değiştirir
    cout << "After replace: " << str << endl;  // Hello, C++ Programming

    // Insert - String'e bir şey eklemek
    str.insert(6, "Beautiful ");  // 6. index'ten önce "Beautiful " ekler
    cout << "After insert: " << str << endl;  // Hello, Beautiful C++ Programming

    // At - Belirli bir indeksten karakter almak
    char c = str.at(6);  // 6. index'teki karakteri alır
    cout << "Character at index 6: " << c << endl;  // B

    // Empty - String'in boş olup olmadığını kontrol etmek
    cout << "Is str empty? " << (str.empty() ? "Yes" : "No") << endl;  // No

    // Clear - String'i boşaltmak
    str.clear();
    cout << "After clear, is str empty? " << (str.empty() ? "Yes" : "No") << endl  ;
*/
    
    
    
    /*
    getline(cin, fullName); // Use getline to read the full name including spaces*/


/*
   string s1 = "a";
string s2 = "bb";

s1.append(s2);
std::cout << s1 << std::endl;
string s3 = s1 + s2;

std::cout << s3 << endl;
*/




/*Thus, if the only names from the std namespace that your program uses are cin,
count, and endl, you might start your program with
#include <iostream>
using std::cin;
using std::cout;
using std::endl;*/
 
 
 //son







}

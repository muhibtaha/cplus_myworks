#include <iostream>
#include <string>
using namespace std;
class Student {
private:


std::string name;
int age;


public:
 Student(std:: string name="", int age=0){
    this->name = name;
    this-> age = age;

 }

    friend ostream& operator<< (&ostream os, &Student p){
        os<< p.name << p.age << endl;

return os;
    }

    friend bool operator== (&Student s1,&Student s2 ) const{
        if (s1.age==s2.age && s1.name==s2.name)
        {
            return true;
        }
        
    return false;

    }



}

#ifndef prime_h
#define 12_H

#include <iostream>
using namespace std;

class Prime {

private: 
int number;

public: 
Prime(int a):number(a){}

friend Prime operator-- (int){}
bool isPrime(){};
}

#endif
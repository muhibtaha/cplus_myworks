#ifndef PRIME_H
#define PRIME_H

#include <iostream>
using namespace std;

class Prime {

private: 
int number;

public: 
Prime(int a);

friend Prime operator-- (const Prime&, int);
bool isPrime(const int &x) const;
friend ostream& operator << (ostream& ,const Prime&);
};

#endif
#include <iostream>
#include "prime.h"
using namespace std;

Prime::Prime(int a){

if(isPrime(a)==true) number=a;



}



bool Prime::isPrime(const int &x) const
{
    if (x<=2)
    {
        return false;
    }
    

    for (int i = 1; i < x; i++)
    {
        if (x%2==0)
        {
            return false;
        }
        
    }
    
    return true;
}




Prime operator-- (const Prime& p, int)
{
    Prime temp(p.number);

    do
    {
        p.number= p.number-1;

    } while (!p.isPrime(p.number));
    
    return temp;


}


ostream& operator << (ostream& os, const Prime& p)
{
    os<< p.number<<endl;


 return os;
}




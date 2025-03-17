#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using std::cout;
using std::endl;



int function(int, int) {return a*b};



int main(){

int x = -10;
cout << x<< endl;

x= +x;
cout << x << endl;




enum lessons {coding=20, ee=10, math};

if (coding >60) cout<< "passed"<< endl;
cout<< coding << ee << math<< endl; //out: 20 10 11 ... If anything does not declared it gives +1 from before that



enum class teams {gs, fb, jk, konyaspor};

teams my_fav = teams::gs;

if(my_fav == teams::gs) cout << "champion" << endl;


enum direction {N=7, S, E, W};
cout<< W<< E<< S << N<< endl; //result 3 2 1 0

cout<< sqrt(16)<< endl;//cmath
cout<< abs(-20)<< endl; //stdclib

 


int i;
for (i = 0; i < 10; i++)
cout << (rand( ) % 11) << endl;

}

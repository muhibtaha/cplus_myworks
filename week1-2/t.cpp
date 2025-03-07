#include <iostream>
using namespace std;

int F(int x, int y=1, int z=1){ //default parameter

return x*y*z;


}


int T(int x, double y) {
return x*y+5;}


int T(double x, int y)  {
return x*y;}



int main() {

cout<< "Multiple of given numbers are " << F(2) << endl;
printf("Multiple of given numbers are %d\n", F(2));


//cout<< T(3.5, 2) << endl;
return 0;

}

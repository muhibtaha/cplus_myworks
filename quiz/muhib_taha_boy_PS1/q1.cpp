#include <iostream>
using namespace std;

int main(){
int prime=1; //default as a prime

for(int i=3; i<100; i++){

  for(int j=2; j<=i/2; j++) {
  
  
  if(i%j==0) prime=0; //not prime
  
  
  }
  if(prime==1) cout << i << " ";
  prime=1; //make default 1 again
}


return 0;








}

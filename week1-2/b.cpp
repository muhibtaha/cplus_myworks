#include <iostream>


void f1(int &a,int  &b){ // In c++ we can use references instead of pointers.
	a+=2;
	b*=2;
}

void f2(int *x, int*y){
	*x+=2;
	*y*=2;
}


int main(){

int v1=10, v2=20, v3=10, v4=20;

f1(v1, v2);
f2(&v3, &v4);

std::cout << v1 << " " << v2 << "\n" << v3 << " " << v4<< std::endl;


}

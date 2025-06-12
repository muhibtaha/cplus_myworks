#include <iostream>



using namespace std;



class MyClass {



public: MyClass(int y, int x): a(y), b(x){}
	MyClass(): a(0), b(0){}   

	int a;
	double b;



};

int main(){


int *p1, *p2;

p1= new int;
*p1= 42;
p2=p1;

cout<<"*p1 is " << *p1<< endl;
cout<<"*p2 is " << *p2<< endl;

*p2=52;
cout<<"*p1 is " << *p1<< endl;
cout<<"*p2 is " << *p2<< endl;

p1=new int;
*p1=88;

cout<<"*p1 is " << *p1<< endl;
cout<<"*p2 is " << *p2<< endl;


///constructors
MyClass *mcPtr;
mcPtr= new MyClass(12.0, 17);
cout<<"A is: " <<  mcPtr->a << " and B is : "<< mcPtr->b<< endl;



//Dynamic arrays
double *d;
d= new double[10];
d[0]= 3;
cout<< "d 0 is " << d[0]<< endl ;


//2d dynamic arrays
	int rows=2;
	int cols=5;
    int** array = new int*[rows];
    
    
        for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }
    
        for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = (i + 1) * 10 + j;  // örnek veri
        }
    }
    
        cout << "2D Dynamic Array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

  delete[] d;
  
    for (int i = 0; i < rows; i++) {
        delete[] array[i];  // her satırı sil
    }
    delete[] array;  // satır işaretçilerini sil



    delete p1;
    delete p2;
    delete mcPtr;
}




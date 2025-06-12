#include <iostream>
using namespace std;

namespace Lib {
    inline namespace V1 {
        void foo() { cout << "v1\n"; }
    }
    namespace V2 {
        void foo() { cout << "v2\n"; }
    }
}

namespace {
    int secret = 42;
    void hidden() { cout << "Only in this file\n"; }
}


namespace VeryLongName {
    void print() { cout << "Hello"; }
}

namespace VLN = VeryLongName;


int main(){



Lib::foo();       // v1
Lib::V2::foo();   // v2

    cout << secret<< endl; 
    hidden();        
    
    
    VLN::print();  // Hello

}

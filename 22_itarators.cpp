#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<char> container;

container.push_back('T');
container.push_back('a');
container.push_back('h');
container.push_back('a');


vector<char>::iterator p = container.begin();

for(p; p!=container.end();p++)
	cout<<*p<< endl;
	
	
vector<char>::reverse_iterator rp;

for(rp=container.rbegin(); rp!=container.rend();rp++)
	cout<<*rp<< endl;
	
	








}

#include <iostream>
#include <list>
#include <set>
using namespace std;

int main()
{	//list
	list<int> listObject;
	
	for(int i=1; i<=3; i++)
	listObject.push_back(i);
	
	
	list<int>::iterator iter;
	
	for(iter=listObject.begin(); iter!=listObject.end(); iter++)
		cout<< *iter<< " ";	

	cout<<endl;

   // insert: 2'nin önüne 100 ekleyelim
    list<int>::iterator it = listObject.begin();
    ++it; // şimdi 2'yi gösteriyor
    listObject.insert(it, 100); // -> 1 100 2 3

    cout << "insert sonrası liste: ";
    for (int x : listObject)
        cout << x << " ";
    cout << endl;
    
       // reverse
    listObject.reverse();
    cout << "reverse sonrası liste: ";
    for (int x : listObject)
        cout << x << " ";
    cout << endl;

    // sort
    listObject.sort();
    cout << "sort sonrası liste: ";
    for (int x : listObject)
        cout << x << " ";
    cout << endl;
    
 
 
 
 
 
 
 ///***********
 

	//set
	set<string> s;
	s.insert("Taha");
	s.insert("Boy");
	s.insert("Muhib");
	//otomatik sıralı. ascii'ye göre
	
	set<string>::const_iterator p;
	for(p=s.begin(); p!=s.end(); p++)
	cout<< *p << " ";
	
	  if (s.count("Muhib"))
        cout << "*******Muhib var" << endl;
        	else cout<< "**********Muhib yok"<< endl;
        
           s.erase("Muhib");
           

	for(p=s.begin(); p!=s.end(); p++)
	cout<< *p << " ";
           
           	  if (s.count("Muhib"))
        cout << "*********Muhib var" << endl;
        	else cout<< "********Muhib yok"<< endl;

}



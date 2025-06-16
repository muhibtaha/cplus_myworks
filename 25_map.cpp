#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;

int main()
{

map<string, string> planets;

planets["MErcury"] = "Hot planet";
planets["Earth"]= "Home";

cout<< "Entry for MErcury: " << planets["MErcury"]<< endl;

if(planets.find("MErcury")!= planets.end()) cout << "Mercury is in the map." << endl;
//bulamazsa planets.end() döndürür


//uses

map<int, string> personIDs = {
{1,"Walt"},
{2,"Kenrick"}
};
set<string> colors = {"red","green","blue"};

//bunu yapmakla
for (auto p : personIDs)
cout << p.first << " " << p.second << endl;

//bunu yapmak aynı şey
map<int, string>::iterator it;
for (it = personIDs.begin(); it != personIDs.end(); ++it)
    cout << it->first << " " << it->second << endl;


for (auto p : colors)
cout << p << " ";


set<string>:: iterator it2;
for(it2= colors.begin(); it2!=colors.end(); it2++)
 cout<< *it2 << " ";
 
 }

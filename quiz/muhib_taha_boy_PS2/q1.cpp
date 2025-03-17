#include <iostream>
using namespace std;
#include <ctime>

//vurma olasılıkları
//a = 1/3
//b = 1/2
//c = 1

//ilk a sonra b sonra c sonra a
//sağ olan ve yüksek isabet oranlıyı vurnmaya çalışıyorlar
//a func
//b func
//c func


int a(bool& a_live,bool& b_live,bool& c_live, int& a_win, int& b_win, int& c_win){


if (a_live){
    if (c_live)
    {

        int number= rand();
        if(number%3==0) c_live=false;
    }

    else if (b_live)
    {
        int number= rand();
        if(number%3==0) b_live=false;    }
    
 if(!b_live||!c_live) {a_win++; return 0;}


}
 return 1;

};

int b(bool& a_live,bool& b_live,bool& c_live,int& a_win, int& b_win, int& c_win){


if(b_live){
            int number= rand();

    if (c_live)

        if(number %2==0) c_live=false;
    

    else if (a_live)
    {
        if(number%2==0) a_live=false;    }


 if(!a_live||!c_live) {b_win++; return 0;} }


return 1;

};

int c(bool& a_live, bool& b_live, bool& c_live,int& a_win, int& b_win, int& c_win){
if(c_live){
            int number= rand();

    if (b_live)

        if(number%1==0) b_live=false; //In the future maybe we want to change the ratio. So ı wrote like that.


    else if (a_live)
    {
        if(number%1==0) a_live=false;    }}


 if(!a_live||!b_live) {c_win++; return 0;} 



return 1;

};
int main(){

    		srand(time(0));
int a_win=0, b_win=0, c_win=0;

for (int i = 0; i < 10000; i++)
{
    bool a_live = true, b_live = true, c_live=true;

    while (1)
    {
        int n1= a(a_live, b_live, c_live, a_win, b_win, c_win);
        int n2= b(a_live, b_live, c_live, a_win, b_win, c_win);
        int n3= c(a_live, b_live, c_live, a_win, b_win, c_win);

        if (n1==0||n2==0||n3==0)break;
    }
    
    
}
if (a_win > b_win && a_win > c_win) {
    cout << " A (" << a_win << " times win)" <<" and ratio "<< a_win/static_cast<double>(10000) << endl;
}
else if (b_win > a_win && b_win > c_win) {
    cout << " B (" << b_win << " times win)"<<" and ratio "<< b_win/static_cast<double>(10000)  << endl;
}
else if (c_win > a_win && c_win > b_win) {
    cout << " C (" << c_win << " times win)"<<" and ratio "<< c_win/static_cast<double>(10000)  << endl;
}
else {
    cout << "Berabere" << endl;
}










}

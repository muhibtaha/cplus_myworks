
#include <iostream>

class RainbowColor {

private:

int color;

public:
RainbowColor(char ch);
RainbowColor(int c): color(c){}
RainbowColor(): color(0){} 

void read() {char c; std::cin>>c; color=c;};
void out_name(); 


RainbowColor next_color();
};



/*
k r 0
t o 1
s y 2
y g 3
m b 4
m i 6
  v 7
*/


 RainbowColor::RainbowColor(char ch)
{
	switch (ch)
	{
	case 'r': color=0;
		  break;
	
	case 'o': color=1;
		  break;
		 
	case 'y': color=3;
		  break;	  
	
	
	}

}


void RainbowColor::out_name()
{
	
		switch (color)
	{
	case 0: std::cout<<"red";
		  break;
	
	case 1: std::cout<<"orange";
		  break;
		 
	case 2: std::cout<<"yellow";
		  break;	  
	
	
	}

}


 RainbowColor RainbowColor::next_color()
{
 int new_color=(color+1)%3;
out_name();
 return RainbowColor(new_color);



}


int main(){
	RainbowColor ilk_Renk(2);
	
	ilk_Renk.next_color().next_color();
	
	return 0;
}



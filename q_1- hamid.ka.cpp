#include <iostream>
#include <string>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class point{
private:
	int x;
	int y;	
	
public:	
    point(int p,int q){
    	x=p;
    	y=q;
    	
	}
	int getSalary1() {
		
      return x;
    }
	int getSalary2() {
		
      return y;
    }	

	int getdistance(int z,int d){
		cout<<sqrt(pow(x-z,2) + pow(y-d,2));
	
		
	}	
};



int main(int argc, char** argv) {
	point E1(20,11);
	point E2(11,10);
	int z=E2.getSalary1();
	int d=E2.getSalary2();
	E1.getdistance(z,d);
	
	 
	
	
	
	
	return 0;
	
}

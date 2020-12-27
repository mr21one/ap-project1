#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class time{
private:	
	int hours;
	int minutes;
	int seconds;
public:
	
    time(){
    	hours=0;
    	minutes=0;
    	seconds=0; }
	time(int h,int m,int s){
		hours=h;
		minutes=m;
		seconds=s;	
	}
	int gethours(){
		
		return hours;
	}
	
	int getmin(){
		
		return minutes;
	}
	int getseconds(){
		
		return seconds;
	}		
};


int main(int argc, char** argv) {
	time one(11,59,59);
	cout<<one.gethours()<<":"<<one.getmin()<<":"<<one.getseconds();
	
	
	
	
	return 0;
}

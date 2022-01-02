#include<iostream>

using namespace std;

struct ram
{
	int id;
	float salary;
	string favchar;  	
};
union money
{
	int paisa;
	float rice;
	char car;
};
int main()
{
	enum meals{ breakfast,lunch,dinner};
	meals m1 = breakfast;
	meals m2= lunch;
	meals m3=dinner;
	cout<<"\n"<<m1;
	cout<<"\n"<<m2;
	cout<<"\n"<<m3;
	
	
	
	
//	union money abhi;
//	abhi.paisa= 34;
//	abhi.rice= 3.45;
//	abhi.car='d';
//	cout<<" this is the :"<<abhi.paisa;
	
//	struct ram mishra ;
//	mishra.id=1;
//	mishra.salary= 12276543.3576543223;
//	mishra.favchar="akm";
//	cout<<" this is salary of mishra:"<<"\t"<<mishra.salary<<endl;
//	cout<<" this is salary of mishra:"<<"\t"<<mishra.id<<endl;
//	cout<<" this is salary of mishra:"<<"\t"<<mishra.favchar<<endl;
	return 0;
}

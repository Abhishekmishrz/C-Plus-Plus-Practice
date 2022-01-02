#include<iostream>
using namespace std;
//Forword declaration
class complex;
class calculator
{
    
    public:
    	int add(int a,int b)
    	{
    		return(a+b);
		}
		int sumrealcomplex( complex ,complex);
		int sumcomcomplex( complex ,complex);
};
class complex
{
	int a,b;
	//indivedually declaraing functions as friends
//	friend calculator::sumrealcomplex(complex o1,complex o2);
//	friend calculator::sumcomcomplex(complex o1,complex o2);

	//declaring the entire calcularter class as friend
	friend class calculator;
public:
	int setdata(int v1,int v2)
	{
		a=v1;
		b=v2;
	}
	int printdata()
	{
		cout<<" your complex no is "<<a<<" + "<<b<<" i"<<endl;
	}
};
int calculator::sumrealcomplex(complex o1,complex o2)
{
	return (o1.a+o2.a);
}
int calculator::sumcomcomplex(complex o1,complex o2)
{
	return (o1.b+o2.b);
}
int main()
{
	complex o1,o2;
	o1.setdata(1,2);
	o1.printdata();
	o2.setdata(3,4);
	o2.printdata();
	calculator cal;
	cal.add(5,4);
	int rec=cal.sumrealcomplex(o1,o2);
	int recs=cal.sumcomcomplex(o1,o2);
	cout<<endl<<"-----------------------------------"<<endl;
	cout<<"This is the value of real part of o1 & o2 :: "<<rec<<endl;
	cout<<"This is the value of real part of o1 & o2 :: "<<recs<<endl;
}


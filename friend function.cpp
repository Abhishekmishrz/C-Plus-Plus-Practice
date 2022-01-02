#include<iostream>
using namespace std;
class complex 
{
	int a,b;
	friend complex sum_value(complex o1,complex o2);
public:
	void setdata(int v1,int v2)
	{
		a=v1;
		b=v2;
	}
	void displaydata()
	{
		cout<<" your value of complex no  is "<<a<<" + "<<b<<" i"<<endl;
	}
};
complex sum_value(complex o1,complex o2)
{
	complex o3;
	o3.setdata((o1.a+o2.a),(o1.b+o1.b));
	return o3;
}
int main()
{
	complex c1,c2,sum;
	c1.setdata(1,3);
	c1.displaydata();
	
	c2.setdata(4,5);
	c2.displaydata();
	
	cout<<endl<<"------------------------------------"<<endl;
	
	sum=sum_value(c1,c2);
	sum.displaydata();
}

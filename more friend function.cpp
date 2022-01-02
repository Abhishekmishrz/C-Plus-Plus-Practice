#include<iostream>
using namespace std;

class b;
class a
{
	int data;
	public:
		
		setprice(int value)
		{
			data=value;
		}
	friend void add(a,b);
};

class b
{
	int num;
	public:
		
		setprice(int value)
		{
			num=value;
	    }
	friend void add(a,b);
};

void add( a o1,b o2)
{
	cout<<" sum of a and b objects "<<o1.data+o2.num<<endl;
}

int main()
{
	a s;
	s.setprice(7);
	
	b t;
	t.setprice(6);
	add(s,t);
	return 0;
}


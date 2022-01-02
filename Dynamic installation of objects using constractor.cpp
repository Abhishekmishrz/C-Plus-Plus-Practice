#include<iostream>
using namespace std;

class bank
{
	int principal;
	int years;
	float intrat;
	float retval;
	public:
		bank(){
		};
		bank(int p,int y,float r);
		bank(int p,int y, int r);
		void show()
		{
			cout<<" The principal amount is "<<principal<< "  intrest rate of bank  "<<intrat<<" in "
			<<years<< " years "<<" then the retun value is "<<retval<<endl;
		}
};

 bank::bank(int p,int y,float r)
{
	principal=p;
	years=y;
	intrat=r;
	retval=principal;
	for(int i=0;i<y;i++)
	{
		retval=retval*(1+r);
	}
}

bank::bank(int p,int y,int r)
{
	principal=p;
	years=y;
	intrat=float(r)/100;
	retval=principal;
	for(int i=0;i<y;i++)
	{
		retval=retval*(1+intrat);
	}
}

int main()
{
	bank b1 ,b2, b3;
	int R,p,y;
	float r;
	
	cout<<" enter the value of p y and r"<<endl;
	cin>>p>>y>>r;
	b1=bank( p, y, r);
	b1.show();
	
	cout<<" enter the value of p y and R"<<endl;
	cin>>p>>y>>R;
	b1=bank( p, y, R);
	b1.show();
	return 0;
}

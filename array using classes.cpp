#include<iostream>
using namespace std;
class shop 
{
	int itemId[100];
	int itemprice[100];
	int counter;
	public:
		void initcounter(void)
		{
			counter=0;
		};
		void setprice(void);
		void displayprice(void);	
};
void shop::setprice()
{
	cout<<" Enter the Id of item "<<counter+1<<endl;
	cin>>itemId[counter];
	cout<<" Enter the price of item "<<endl;
	cin>>itemprice[counter];
	counter++;
}
void shop::displayprice()
{
	for(int i=0;i<counter;i++)
	{
		cout<<" The price of item with Id is "<<itemId[i]<<" and the price of item is "<<itemprice[i]<<endl;
	}
}
int main()
{
	shop ram;
	ram.initcounter();
	ram.setprice();
	ram.setprice();
	ram.setprice();
	ram.displayprice();
	return 0;
}

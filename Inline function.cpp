#include<iostream>
using namespace std;
//inline int product(int a,int b)
//{
//	static int c=0;
//	c=c+1;
//	return a*b+c;
//}
float abhi(int money,float intrest=1.34 )
{
	return money*intrest;
}
int main()
{
	int a,b;
	int money=100000;
//	cout<<"Enter the value of a and b "<<endl;
//	cin>>a>>b;
//	cout<<" The product of a and b is "<<product(a,b)<<endl;
//	cout<<" The product of a and b is "<<product(a,b)<<endl;
//	cout<<" The product of a and b is "<<product(a,b)<<endl;
//	cout<<" The product of a and b is "<<product(a,b)<<endl;
//	cout<<" The product of a and b is "<<product(a,b)<<endl;
//	cout<<" The product of a and b is "<<product(a,b)<<endl;
//	cout<<" The product of a and b is "<<product(a,b)<<endl;
//	
	cout<<"\n You have "<<money<<" in your bank account ,After intrest your total money  is "<<abhi(money)<<" After 1 year "<<endl;
	return 0;

}

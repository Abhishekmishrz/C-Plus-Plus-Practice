#include<iostream>
using namespace std;

int main()
{
	int i, pos,num,a[100]={3,2,5,9,8};
			
	cout<<" enter the no "<<endl;
	cin>>num;
	cout<<" enter the pos "<<endl;
	cin>>pos;
	
	for(i=4;i>=pos;i++)
			{
				a[i-1]=a[i];	
			}
			a[pos]=	num;
	
	cout<<"new arry"<<endl;
	for(i=0;i>=4;i=i-1)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

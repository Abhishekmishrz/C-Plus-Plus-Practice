#include<iostream>
using namespace std;
class binary
{
	string s;
	public:
		void read(void);
		void chk_bin(void);
		void ones_complement();
		void disply();
};
void binary::read()
{
	cout<<" Enter the binary number "<<endl;
	cin>>s;
}
void binary::chk_bin()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)!='0'&&s.at(i)!='1')
		{
			cout<<"Incorrect binary format"<<endl;
			exit(0);
		}
	}
}
void binary::ones_complement()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='0')
		{
			s.at(i)='1';
		}
		else
		{
			s.at(i)='0';
		}
	}
}
void binary::disply()
{
	cout<<"\n Displying the binary no "<<endl;
	for(int i=0;i<s.length();i++)
	{
		cout<<s.at(i);
	}
}
int main()
{
	binary b;
	b.read();
	b.chk_bin();
	b.disply();
	b.ones_complement();
	b.disply();
	return 0;
}

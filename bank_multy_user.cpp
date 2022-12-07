#include<iostream>
using namespace std;
class bank
{
	protected:
		int atmpin=1234;
		float bal=12345;
		
	public:
		int acc_no=9876;
		string ifsc="abc123";
		string name="abc";
		
		int acc_no1=0001;
		string ifsc1="abc4040";
		string name1="xyz";	
	
};

class user1:public bank
{

	public:
		void userA()
		{
	//	atmpin=pin;
		
		cout<<"atmpin="<<atmpin<<endl;
		cout<<"bal="<<bal<<endl;
		}
};
class user2:public bank
{

	public:
		void userB()
		{
	//	atmpin=pin;
		
		cout<<"atmpin="<<atmpin<<endl;
		cout<<"bal="<<bal<<endl;
		}
};


int main()
{
	bank obj;
	user1 u1;
	user2 u2;
	
//	int pin;
//	s.getatmpin();
//	cout<<"Enter Pin:";
//	cin>>pin;
	cout<<"ACC No="<<obj.acc_no<<endl;
	cout<<"IFSC="<<obj.ifsc<<endl;
	cout<<"Name="<<obj.name<<endl;
	
	cout<<"ACC No="<<obj.acc_no1<<endl;
	cout<<"IFSC="<<obj.ifsc1<<endl;
	cout<<"Name="<<obj.name1<<endl;
	
	//	s.getatmpin(pin);
	return 0;
}

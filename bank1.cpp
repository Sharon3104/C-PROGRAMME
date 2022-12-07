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

int main()
{
	bank obj;
	user1 u;
//	int pin;
//	s.getatmpin();
//	cout<<"Enter Pin:";
//	cin>>pin;
	cout<<"ACC No="<<obj.acc_no<<endl;
	cout<<"IFSC="<<obj.ifsc<<endl;
	cout<<"Name="<<obj.name<<endl;
//	s.getatmpin(pin);
	return 0;
}

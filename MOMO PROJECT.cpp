#include <iostream>
using namespace std;
int main()
{
	string pin,defaultpin;
	double c_balance;
	string number,reference;
	string old_pin;
	string new_pin;
	double balance,amount;
	balance=1000;
	int attempts,option;
	defaultpin = "0000";
	
	cout<<"Enter Pin for Authentication"<<endl;
	//Authentication
	do{
		cout<<"Please Enter Your MM Pin "<<endl;
		cin>>pin;
		attempts++;
		if(pin !=defaultpin){
			cout<<"Incorrect Pin. Please"<<endl;
			if(attempts==3)
			{
				cout<<"Maximum attempts reached.";
				cout<<"Exiting Programm"<<endl;
				switch(attempts)
				{
					break;
				}
				return 0;
			}
		}} while(pin !=defaultpin && attempts <= 3);
		
cout<<"1.Check Balance"<<endl;
cout<<"2. Reset/Change Pin"<<endl;
cout<<"3.Send Money"<<endl;
cin>>option;
if(option==1)
{
	cout<<"Enter MM Pin"<<endl;
	cin>>pin;
	if(pin==defaultpin)
	{
		
	
	cout<<"Your Balance is  "<<balance<<endl;
}
else
{
	cout<<"Incorrect Pin"<<endl;
}

}
else if(option==2)
{
	cout<<"Enter Old Pin";
	cin>>old_pin;
	if(old_pin==defaultpin)
	{
		cout<<"Enter New Pin"<<endl;
		cin>>new_pin;
		defaultpin=new_pin;
		cout<<"Your new Pin is"<<new_pin;
	}
	else
	{
		cout<<"Invalid Pin"<<endl;
	}
}
else if(option==3)
{
	cout<<"Enter Mobile Number"<<endl;
	cin>>number;
	cout<<"Enter Amount"<<endl;
	cin>>amount;
	if(amount>balance)
	{
		cout<<"Insufficient Balance"<<endl;
	}
	else
	{
	
	cout<<"Enter Reference"<<endl;
	cin>>reference;
	cout<<"**********You  Have Tranfered "<<amount<<" To " <<number<<" Reference as "<<reference<<"*******"<<endl;
	c_balance=balance-amount;
	cout<<" Current Balance is "<<c_balance;
}
}
    return 0;
}

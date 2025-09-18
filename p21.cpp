/*WAP to design a converter that converts the given distance from meter to centimeter and from feet to inches and vice versa.
[Note:1 meter =100 centimeters and 1 feet=12 inches ]*/

#include<iostream>
using namespace std;

int main()
{
	int choice;
	double result,n;
	
	cout<<"....DISTANCE CONVERTER...."<<endl;
	cout<<"1.Meter to Centimeter"<<endl;
	cout<<"2.Centimeter to Meter"<<endl;
	cout<<"3.Feet to Inches"<<endl;
	cout<<"4.Inches to Feet"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"Enter distance in meter:";
			cin>>n;
			result=n*100;
			cout<<n<<"Meter="<<result<<"Centimeter"<<endl;
			break;
		
		case 2:
			cout<<"Enter distance in Centimeter:";
			cin>>n;
			result=n/100;
			cout<<n<<"Centimeter="<<result<<"Meter"<<endl;
			break;
			
		case 3:
			cout<<"Enter distance in feet:";
			cin>>n;
			result=n*12;
			cout<<n<<"Feet="<<result<<"Inches"<<endl;
			break;
			
		case 4:
			cout<<"Enter distance in inch:";
			cin>>n;
			result=n/12;
			cout<<n<<"Inche="<<result<<"Feet"<<endl;
			break;
	}
	return 0;
}

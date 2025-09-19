#include<iostream>
#include<string>
using namespace std;
 
int main()
{
	string consumerName;
	int consumerNumber,unitsConsumed;
	double amount=0.0;
	
	//Input details
	cout<<"Enter consumer's number:";
	cin>>consumerNumber;//To ignore newline after number input
	cout<<"Enter consumer's name:";
	getline(cin,consumerName);
	cout<<"Enter units consumed:";
	cin>>unitsConsumed;
	
	//Calculate amount based on tariff slabs
	if(unitsConsumed<=100)
	{
		amount=unitsConsumed*5.50;
	}
	else if(unitsConsumed<=300)
	{
		amount=100*5.50+(unitsConsumed-100)*6.50;
	}
	else if(unitsConsumed<=600)
	{
		amount=100*5.50+200*6.50+(unitsConsumed-300)*7.50;
	}
	else
	{
		amount=100 * 5.50 +200 *6.50+ 300 *7.50 + (unitsConsumed-600)*8.50;
	}
	
	//Display money receipt
	cout<<"\nMoney Receipt\n";
	cout<<"Consumer's Number:"<<consumerNumber<<endl;
	cout<<"Consumer's Name:"<<consumerName<<endl;
	cout<<"Units Consumed:"<<unitsConsumed<<endl;
	cout<<"Amount to be Paid:"<<amount<<endl;
	
	return 0;

}

//WAP to add 8% tax to a given number amount and round the net amount to its positive nearest amount.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double amount , netAmount;
	
	cout<<"Enter the amount:";
	cin>>amount;
	
	netAmount=amount + (0.08 * amount);
	netAmount=round(netAmount);
	
	cout<<"Net amount after 8% tax (rounded):"<<netAmount<<endl;
	
	return 0;
}
//Enter the amount:250.50
//Net amount after 8% tax (rounded):271

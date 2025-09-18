/*WAP to read the three different single digits between 1 and 9.
Display the smallest and largest three-digit number using the read single digits.*/

#include<iostream>
using namespace std;

int main()
{
	int d1,d2,d3;
	cout<<"Enter three different digits(1-9):";
	cin>>d1>>d2>>d3;
	
	int smallest,largest;
	
	//find smallest digit
	int min1=d1<d2 ? d1:d2;
	int min2=min1 <d3 ? min1:d3;
	
	//find largest digit
	int max1=d1>d2 ? d1:d2;
	int max2=max1 > d3 ? max1:d3;
	
	//middle digit = sum-smallest-largest
	int mid=d1+d2+d3 -min2 -max2;
	
	//smallest number = smallest,middle,largest
	smallest=min2*100 +mid * 10 + max2;
	
	//largest number = largest,middle,smallest
	largest=max2 * 100 +mid *10 +min2;
	
	cout<<"smallest number:"<<smallest<<endl;
	cout<<"largest number:"<<largest<<endl;
	
	return 0;
}

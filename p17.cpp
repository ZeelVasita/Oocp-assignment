//WAP that reads a character and print out whether or not it is vowel or a consonant.
#include<iostream>
using namespace std;

int main()
{
	char ch;
	
	cout<<"Enter the character:";
	cin>>ch;
	
	if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
	{
		cout<<"This is vowel"<<endl;
	}
	else
	{
		cout<<"This is not vowel"<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int add(int,int);
void findSum(int&,int&,int&);
int findMax(int,int);
void findMaximum(int&,int&,int&);
int findMin(int,int);
void findMinimum(int&,int&,int&);
int main()
{
	int n1,n2=0;
	int choice;
	char ch;
	cout<<"Enter the first number."<<endl;
	cin>>n1;
	cout<<"Enter a second number."<<endl;
	cin>>n2;
	cout<<"Enter 1 to find the sum of two numbers."<<endl;
	cout<<"Enter 2 to find the maximum of the two numbers."<<endl;
	cout<<"Enter 3 to find the minimum of the two numbers."<<endl;
	cin>>choice;
	cout<<"Enter a for using call by value."<<endl;
	cout<<"Enter b for using call by reference."<<endl;
	cin>>ch;
	switch(choice)
	{
		case 1: switch(ch)
			{
				case 'a': cout<<"The sum of the two numbers is "<<add(n1,n2)<<endl;
					break;
				case 'b': int sum=0;
					findSum(n1,n2,sum);
					cout<<"The sum of the two numbers is "<<sum<<endl;
					break;
			}
			break;
		case 2: switch(ch)
			{
				case 'a': cout<<"The maximum of the two numbers entered is "<<findMax(n1,n2)<<endl;
					break;
				case 'b': int max=0;
					findMaximum(n1,n2,max);
					cout<<"The maximum of the two numbers entered is "<<max<<endl;
					break;
			}
			break;
		case 3: switch(ch)
			{
				case 'a': cout<<"The minimum of the two numbers entered is "<<findMin(n1,n2)<<endl;
					break;
				case 'b': int min=0;
					findMinimum(n1,n2,min);
					cout<<"The minimum of the two numbers entered is "<<min<<endl;
					break;
			}
			break;
		default:cout<<"The choices inputted are incorrect."<<endl;
	}
	return 0;
}
int add(int a, int b)
{	
	int sum=a+b;
	return sum;
}
void findSum(int& a,int& b,int& sum)
{
	sum=a+b;
}
int findMin(int a, int b)
{
	if(a<b)
	return a;
	else
	return b;
}
void findMinimum(int& a, int& b, int& min)
{
	if(a<b)
	min=a;
	else 
	min=b;
}
int findMax(int a, int b)
{
	if(a>b)
	return a;
	else
	return b;
}
void findMaximum(int& a, int& b, int& max)
{
	if(a>b)
	max=a;
	else 
	max=b;
}

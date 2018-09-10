//include the library
#include <iostream>
using namespace std;
int add(int,int);
void findSum(int&,int&,int&);
//declare the main function
int main()
{
	cout<<"Using call by value."<<endl;
	int n1,n2=0;
	cout<<"Enter the first number."<<endl;
	cin>>n1;
	cout<<"Enter a second number."<<endl;
	cin>>n2;
	int result=add(n1,n2);
	cout<<"The sum of the two numbers is "<<result<<endl;	
	cout<<"Using call by reference now."<<endl;
	cout<<"Enter the first number."<<endl;
	cin>>n1;
	cout<<"Enter a second number."<<endl;
	cin>>n2;
	result=0;
	findSum(n1,n2,result);
	cout<<"The sum of the two numbers is "<<result<<endl;
	return 0;
}
//function to calculate the sum using call by value
int add(int a, int b)
{	
	int sum=a+b;
	return sum;
}
//function to calculate the sum using call by reference
void findSum(int& a,int& b,int& sum)
{
	sum=a+b;
}

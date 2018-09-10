#include <iostream>
using namespace std;
int findMin(int,int);
void findMinimum(int&,int&,int&);
int main()
{
	int n1,n2=0;
	cout<<"Using call by value."<<endl;
	cout<<"Enter a number."<<endl;
	cin>>n1;
	cout<<"Enter another number."<<endl;
	cin>>n2;
	int min=findMin(n1,n2);
	cout<<"The minimun is "<<min<<endl;
	cout<<"Using call by refernece."<<endl;
	min=0;
	cout<<"Enter a number."<<endl;
	cin>>n1;
	cout<<"Enter another number."<<endl;
	cin>>n2;
	findMinimum(n1,n2,min);
	cout<<"The minimum is "<<min<<endl;
	return 0;
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

#include <iostream>
using namespace std;
int findMax(int,int);
void findMaximum(int&,int&,int&);
int main()
{
	int n1,n2=0;
	cout<<"Using call by value."<<endl;
	cout<<"Enter a number."<<endl;
	cin>>n1;
	cout<<"Enter another number."<<endl;
	cin>>n2;
	int max=findMax(n1,n2);
	cout<<"The maximun is "<<max<<endl;
	cout<<"Using call by refernece."<<endl;
	max=0;
	cout<<"Enter a number."<<endl;
	cin>>n1;
	cout<<"Enter another number."<<endl;
	cin>>n2;
	findMaximum(n1,n2,max);
	cout<<"The maximun is "<<max<<endl;
	return 0;
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

#include <iostream>
using namespace std;
int sumEvenNumbers(int,int);
int sumOddNumbers(int,int);
int sumSquareEvenNumbers(int,int);
int sumSquareOddNumbers(int,int);
int main()
{
	int n1,n2=0;
	cout<<"Enter the lower limit of the series."<<endl;
	cin>>n1;
	cout<<"Enter the upper limit of the series."<<endl;
	cin>>n2;
	int sumEven=sumEvenNumbers(n1,n2);
	int sumOdd=sumOddNumbers(n1,n2);
	int sumSquareEven=sumSquareEvenNumbers(n1,n2);
	int sumSquareOdd=sumSquareOddNumbers(n1,n2);
	cout<<"The sum of even numbers between "<<n1<<" and "<<n2<<" is "<<sumEven<<endl;
	cout<<"The sum of odd numbers between "<<n1<<" and "<<n2<<" is "<<sumOdd<<endl;
	cout<<"The sum of squares of even numbers between "<<n1<<" and "<<n2<<" is "<<sumSquareEven<<endl;
	cout<<"The sum of squares of odd numbers between "<<n1<<" and "<<n2<<" is "<<sumSquareOdd<<endl;
	return 0;
}
int sumEvenNumbers(int x,int y)
{
	int i,sum=0;
	if(x%2==0)
	i=x;
	else
	i=x+1;
	for(;i<=y;i+=2)
	sum+=i;
	return sum;
}
int sumOddNumbers(int x,int y)
{
	int i,sum=0;
	if(x%2!=0)
	i=x;
	else
	i=x+1;
	for(;i<=y;i+=2)
	sum+=i;
	return sum;
}
int sumSquareEvenNumbers(int x,int y)
{
	int i,sum=0;
	if(x%2==0)
	i=x;
	else
	i=x+1;
	for(;i<=y;i+=2)
	sum+=(i*i);
	return sum;
}
int sumSquareOddNumbers(int x,int y)
{
	int i,sum=0;
	if(x%2!=0)
	i=x;
	else
	i=x+1;
	for(;i<=y;i+=2)
	sum+=(i*i);
	return sum;
}

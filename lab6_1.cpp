#include <iostream>
#include <cstring>
using namespace  std;
float read(string);
float calculate(float,float,float);
void display(float,float,float,float,float);
int main()
{
	float unitCost=read("cost of per unit.");
	float unitsPurch=read("number of units purchased.");
	float taxRate=read("tax rate applicable.");
	float salesTax=calculate(unitCost,unitsPurch,taxRate);
	float totalDue=unitCost*unitsPurch+salesTax;
	display(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	return 0;
}
float read(string str)
{
	float value;
	cout<<"Enter the "<<str<<endl;
	cin>>value;
	return value;
}
float calculate(float price,float units,float rate)
{
	return (price*units*rate/100.0f);
}
void display(float c,float u,float r,float t, float p)
{
	cout<<"The number of units purchased at the rate of Rs "<<c<<" per unit is "<<u<<endl;
	cout<<"The sales tax payable at the rate of "<<(r/100.0f)<<"% is Rs "<<t<<endl;
	cout<<"The total price payable is Rs "<<p<<endl;
}


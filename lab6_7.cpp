#include  <iostream>
using namespace std;
char toUpper(char);
char toLower(char);
int main()
{
	char ch;
	char chf;
	cout<<"Enter a letter of the alphabet."<<endl;
	cin>>ch;
	if((int)ch>=65&&(int)ch<=91)
	{
		chf=toLower(ch);
		cout<<"The inputted character "<<ch<<" was an upper case alphabet."<<endl;
		cout<<"After conveting its case it is "<<chf<<endl;
	}
	else if((int)ch>=97&&(int)ch<=122)
	{
		chf=toUpper(ch);
		cout<<"The inputted character "<<ch<<" was a lower case alphabet."<<endl;
		cout<<"After conveting its case it is "<<chf<<endl;
	}
	return 0;
}
char toLower(char c)
{
	return (char)((int)c+32);
}
char toUpper(char c)
{
	return (char)((int)c-32);
}

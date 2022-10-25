
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int no1,no2;
    char operato;
	while(1)
	{
		cout<<"please enter first digit:";
		cin>>no1;
		cout<<"please enter second  digit:";
		cin>>no2;
		cout<<"please enter an operator:";
		cin>>operato;
switch(operatoo)
{
	case '+':
	cout<<"add:"<<no1+no2<<endl;
	break;
	case'-':
	cout<<"subtract:"<<no1-no2<<endl;
	break;
	case'*':
	cout<<"multiply:"<<no1*no2<<endl;	
	break;
	case'/':
	cout <<"divide:"<<no1/no2<<endl;
	break;
	case'%':
	cout <<"Rem:"<<no1%no2<<endl;
	break;
	default:
	cout<<"\ninvild operator\n";
}
char choice;
cout<<"\nEnter your choice for continue for yes or not for no:\n ";
cin>>choice;
if(choice=='y')
{
	continue;
}
else if(choice=='n')
{
	break;
}
else
{
	cout<<"\ninvild  choice";
	break;
}
}
}
//project created by:hafiz muhammad jahanzaib ejaz
//class:bsds 1st

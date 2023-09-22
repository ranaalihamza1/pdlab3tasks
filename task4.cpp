#include<iostream>
using namespace std;
main()
{	float i;
	float p;
	int imposterchance;
	cout<<"Enter Imposter Count: ";
	cin>>i;
	cout<<"Enter Player Count: ";
	cin>>p;
	imposterchance=100*(i/p);
	cout<<"Chance of being an imposter: "<<imposterchance<<"%";}
	
	
	
	
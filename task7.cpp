#include<iostream>
using namespace std;
main()
{
	string name;
	float adultticket;
	float childticket;
	float adultticketsold;
	float childticketsold;
	float percentage;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>adultticket;
	cout<<"Enter the child ticket price: $";
	cin>>childticket;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adultticketsold;
	cout<<"Enter the number of child tickets sold: ";
	cin>>childticketsold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>percentage; 
	int totalprice;
	totalprice=((adultticket*adultticketsold)+(childticket*childticketsold));
	int charity;
	charity=totalprice/percentage;
	int remainingamount;
	remainingamount=totalprice-charity;
	cout<<""<<endl;
	cout<<"Movie: "<<name<<endl;
	cout<<"Total amount generated from ticket sales: $"<<totalprice<<endl;
	cout<<"Donation to charity (10%): $"<<charity<<endl;
	cout<<"Remaining amount after donation: $"<<remainingamount<<endl;
}
	
	
	
#include<iostream>
using namespace std;
main()
{
	float n;
	float m;
	float totalv;
	float totalf;
	float totalrupees;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>n;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>m;
	cout<<"Enter total kilograms of vegetables: ";
	cin>> totalv;
	cout<<"Enter total kilograms of fruits: ";
	cin>> totalf;
	totalrupees=(((m*totalf)+(n*totalv))/1.94);
	cout<<"Total earnings in Rupees (Rps): "<<totalrupees;
}
	
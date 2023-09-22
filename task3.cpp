#include<iostream>
using namespace std;
main()
{ 	float initialvelocity;
	float acc;
	float time;
	float finalvelocity;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>initialvelocity;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>acc;
	cout<<"Enter Time (s): ";
	cin>>time;
	finalvelocity=(acc*time)+initialvelocity;
	cout<<"Final Velocity (m/s): "<<finalvelocity;}
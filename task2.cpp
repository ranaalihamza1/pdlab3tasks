#include<iostream>
using namespace std;
main()
{ 	int numberofminutes;
	int framespersecond;
	int totalframes=0;
	cout<<"Number of Minutes: ";
	cin>> numberofminutes;
	cout<<"Frames per Second: ";
	cin>> framespersecond;
	totalframes=numberofminutes*framespersecond*60;
	cout<<"Total Number of Frames: "<<totalframes;
}
	
	
	
	
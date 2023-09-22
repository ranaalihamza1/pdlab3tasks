#include<iostream>
using namespace std;
main()
{
	int squarefeet;
	int height;
	int width;
	cout<<"Number of square meters you can paint: ";
	cin>>squarefeet;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	cin>>height;
	int walls;
	walls=squarefeet/(width*height);
	cout<<"Number of walls you can paint: "<<walls;
}

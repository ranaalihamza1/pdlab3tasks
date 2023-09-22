#include<iostream>
using namespace std;
main()
{ int number;
 cout<<"Enter a 4-digit number: ";
 cin>>number;
 int number1;
 number1=number%10;
 number = number/10;
 int number2;
 number2 =number%10;
 number = number/10;
 int number3;
 number3 =number%10;
 number =number/10;
int sum;
sum = (number + number1 + number2 +number3);
cout<<"Sum of the individual digits: "<<sum;}

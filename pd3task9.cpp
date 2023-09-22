#include <iostream>
using namespace std;
main()
{ 
int fourdigitnumber; 
int num1; 
int num2; 
int num3; 
int num4; 
int sum;
 
cout<<"Enter a 4-digit number: ";
cin>>fourdigitnumber;

num1=fourdigitnumber%10;
num2=(fourdigitnumber/10)%10;
num3=(fourdigitnumber/100)%10;
num4=(fourdigitnumber/1000);

sum=num1+num2+num3+num4;
cout <<"Sum of the individual digits: "<<sum; 



}

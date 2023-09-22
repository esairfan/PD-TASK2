#include <iostream>
using namespace std;
main()
{
int age; 
int nooftimesmoving; 
int avgspaninsamehouse; 
 
cout<<"Enter the person's age: ";
cin>>age;

cout<<"Enter the number of times they've moved: ";
cin>>nooftimesmoving;
 
avgspaninsamehouse=age/(nooftimesmoving+1);
cout<<"Average number of years lived in the same house: "<<avgspaninsamehouse; 



}
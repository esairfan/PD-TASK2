#include <iostream>
using namespace std;
main()
{
string name; 
float targetwieghtloss; 
float days; 
 
cout<<"Enter the Name of the Person: ";
cin>>name;

cout<<"Enter the target weight loss in kilograms: ";
cin>>targetwieghtloss;
 
days=targetwieghtloss*15;
cout <<name<<" will need "<<days<<" days to lose "<<targetwieghtloss<<" kg of weight by following the doctor's suggestions"; 



}

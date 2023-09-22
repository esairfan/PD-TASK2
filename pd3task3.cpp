#include <iostream>
using namespace std;
main()
{
cout<<"Enter Initial Velocity (m/s): ";
float inivelocity; 
cin>>inivelocity;

cout<<"Enter Acceleration (m/s^2): ";
float acceleration; 
cin>>acceleration;

cout<<"Enter Time (s): ";
float time; 
cin>>time;
 
float finalvelocity;
finalvelocity= (acceleration*time)+inivelocity;
cout<<"Final Velocity (m/s): "<<finalvelocity;
}


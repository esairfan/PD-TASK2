#include <iostream>
using namespace std;
main()
{
int sqmetrs; 
int width; 
int hieght; 
int walls;
  
cout<<"Number of square meters you can paint: ";
cin>>sqmetrs;

cout<<"Width of the single wall (in meters): ";
cin>>width;

cout<<"Height of the single wall (in meters): ";
cin>>hieght;
 
walls=sqmetrs/(width*hieght);
cout<<"Number of walls you can paint: "<<walls; 



}

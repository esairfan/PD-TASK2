#include <iostream>
using namespace std;
main ( ){
 cout<<"Number of Minutes: ";
  int minutes;
  cin>>minutes;
  cout<<"Frames per Second: ";
  int framespersecond;
  cin>>framespersecond;
   int frames;
  frames = (minutes*60) * framespersecond;
  cout<<"Total Number of Frames: "<<frames;
          }
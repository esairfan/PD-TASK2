#include <iostream>
using namespace std;
main()
{
cout<<"Enter Imposter Count: ";
float impostercount; 
cin>>impostercount;

cout<<"Enter Player Count: ";
float playercount; 
cin>>playercount;

float chancesofimposter;
chancesofimposter=100*(impostercount/playercount);
cout<<"Chance of being an imposter: "<<chancesofimposter<<"%";
}

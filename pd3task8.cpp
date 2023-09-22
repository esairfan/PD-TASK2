#include <iostream>
using namespace std;
main()
{
float vegetablepriceincoinsprkg; 
float fruitpriceincoinsprkg;
int totalkgsofvegetables; 
int totalkgsoffruits; 
float totalpriceofvegetablesandfruitsincoins; 
float totalpriceofvegetablesandfruitsinrps; 
 

cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegetablepriceincoinsprkg;

cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruitpriceincoinsprkg;

cout<<"Enter total kilograms of vegetables: ";
cin>>totalkgsofvegetables;

cout<<"Enter total kilograms of fruits: ";
cin>>totalkgsoffruits;


totalpriceofvegetablesandfruitsincoins=totalkgsoffruits*fruitpriceincoinsprkg+totalkgsofvegetables*vegetablepriceincoinsprkg;

totalpriceofvegetablesandfruitsinrps= totalpriceofvegetablesandfruitsincoins/1.94;
cout<<"Total earnings in Rupees (Rps): "<<totalpriceofvegetablesandfruitsinrps;
 

}
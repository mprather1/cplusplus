#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double mpg, distance, gallons, pricePerGallon, totalCost;

  // insertion operator
  cout<<"Enter mpg"<<endl;

  // extraction operator
  cin>>mpg;

  cout<<"Enter the distance in miles: "<<endl;
  cin>>distance;
  cout<<"Enter the price for one gallon of gas: "<<endl;
  cin>>pricePerGallon;

  gallons = distance/mpg;
  totalCost = gallons * pricePerGallon;
  cout<<"Total trip cost: $"<<fixed<<setprecision(2)<<totalCost<<endl;

  return 0;
  
}

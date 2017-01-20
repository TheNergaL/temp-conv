#include <iostream>
#include <string>

//simple temperature system of measurement converter

using namespace std;


int main()
{
  int temp, newTemp;
  string unit;
  string newUnit;

  cout << "This program converts temperatures between systems of measurement. \n";
  cout << "Enter now your temperature, its current system of measurement, and your desired system of measurement. \n";
  cin >> temp;
  cin >> unit;
  cin >> newUnit;
  char identifier = unit[0];
  char newIdentifier = newUnit[0];

//could probably do this in a case block...

  if (identifier == 'F' && newIdentifier == 'C') //farhenheit to celcius case
  {
    newTemp = (temp - 32) / 9 * 5;
    cout << "You began with " << temp << " which was measured in " << unit << " and it became " << newTemp << " degrees " << newUnit;
  }

  if (identifier == 'F' && newIdentifier == 'K') //farhenheit to kelvin case
  {
    newTemp = (5/9) * (temp - 32) + 273;
    cout << newTemp;
  }

  if (identifier == 'C' && newIdentifier == 'F') //celcius to far case
  {
    newTemp = (9/5) * temp + 32;
    cout << newTemp;
  }

  if (identifier == 'C' && newIdentifier == 'K') //celcius to kelvin
  {
    newTemp = temp + 273;
    cout << newTemp;
  }

  if (identifier == 'K' && newIdentifier == 'F') //kelvin to farhenheit
  {
    newTemp = (9/5) * (temp - 273) + 32;
    cout << newTemp;
  }

  else if (identifier == 'K' && newIdentifier == 'C')
  {
    newTemp = temp - 273;
    cout << newTemp;
  }

return 0;

}

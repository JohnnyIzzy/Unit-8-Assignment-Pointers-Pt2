#include <iostream>
using namespace std;

struct Car
{
   string make;
   string model;
   int year;
   string color;
};

void updateColor(Car *car);
Car& updateColor2(Car *car);

int main() {

   // create 2 car objects
   Car car1, car2;
   // initialize all fields of car except color
   car1.make = "Honda";
   car1.model = "Civic";
   car1.year = 2005;

   // call updateColor to update the color

   updateColor(&car1);
   car2= updateColor2(&car1);
// display the original and updated car objects
  
cout << "\nOriginal Car: \nMake: " << car1.make << " \nModel: " << car1.model << " \nYear: " << car1.year << " \nColor: " << car1.color << '\n' << '\n';
cout << "Updated Car: \nMake: " << car2.make <<" \nModel: "<<car2.model<<" \nYear: " << car2.year << " \nColor: " << car2.color << '\n';

   return 0;
}

// function to update the color of the Car
void updateColor(Car *car)
{
   // if year if after 2010 update the color to GREEN
   if(car->year > 2010)
       car->color = "GREEN";
   else // if year is 2010 or before update the color to RED
       car->color = "RED";
}

// function to create a new car and update the color based on the year of original object car
Car& updateColor2(Car *car)
{
   Car *updCar = new Car();
   if(car->year > 2010)
       updCar->color = "GREEN";
   else
       updCar->color = "RED";

   return *updCar;
}
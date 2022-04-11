/*
========== HELLO WORLD ==========
REVIEW
Before we move on, let’s write a letter to your future self.
In letter.cpp, let’s add the following:

Goal(s) for yourself.
Name and date.
Press Run to mail the letter! 📬

P.S. This letter will be returned when you complete the course.
*/
#include <iostream>

int main() 
{
  std::cout << "Dear Self,\n";
  std::cout << "Get your life together.\n";
  std::cout << "-You, 4/10/22\n";  
}

/*
========== VARIABLES ==========
CHALLENGE
Let’s convert a temperature from Fahrenheit (F) to Celsius (C).

Let’s ask the user what the temperature is using cin!
The formula is the following:
C = (F - 32) / 1.8C=(F−32)/1.8
*/
#include <iostream>

int main() {  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}

/*
REVIEW
Create a program that takes in the weight of an item and then calculates how much that item would weigh on Mars.
*/
#include <iostream>

int main() {
  int earthWeight;
  double marsWeight;
  std::cout << "Enter item weight: ";
  std::cin >> earthWeight;
  marsWeight = earthWeight * 0.38;
  std::cout << "Weight on Mars: " << marsWeight << "\n";
}

/*
Create a program that asks for a distance in miles as input. The program will then output how much that distance is in kilometers.
*/
#include <iostream>

int main() {
  int miles;
  double kilometers;
  std::cout << "Enter Distance in Miles: ";
  std::cin >> miles;
  kilometers = miles * 1.6;
  std::cout << "Distance in kilometers is: " << kilometers << "\n";
}

/*
========== CONDITIONALS & LOGIC ==========
REVIEW
Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.
Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.
*/
#include <iostream>

int main() {
  double earthWeight;
  double destinationWeight;
  int destination;

  std::cout << "Enter your weight on Eath: ";
  std::cin >> earthWeight;

  std::cout << 
  "What is the Destination Planet?\n"
  "1. Mercury\n"
  "2. Venus\n"
  "3. Mars\n"
  "4. Jupiter\n"
  "5. Saturn\n"
  "6. Uranus\n"
  "7. Neptune\n"
  "ENTER Destination: ";
  std::cin >> destination;

  switch (destination) {
  case 1:
    destinationWeight = earthWeight * 0.38;
    std::cout << "Weight on Mercury: " << destinationWeight << " lbs\n";
    break;
  case 2:
    destinationWeight = earthWeight * 0.91;
    std::cout << "Weight on Venus: " << destinationWeight << " lbs\n";
    break;
  case 3:
    destinationWeight = earthWeight * 0.38;
    std::cout << "Weight on Mars: " << destinationWeight << " lbs\n";
    break;
  case 4:
    destinationWeight = earthWeight * 2.34;
    std::cout << "Weight on Jupiter: " << destinationWeight << " lbs\n";
    break;
  case 5:
    destinationWeight = earthWeight * 1.06;
    std::cout << "Weight on Saturn: " << destinationWeight << " lbs\n";
    break;
  case 6:
    destinationWeight = earthWeight * 0.92;
    std::cout << "Weight on Uranus: " << destinationWeight << " lbs\n";
    break;
  case 7:
    destinationWeight = earthWeight * 1.19;
    std::cout << "Weight on Neptune: " << destinationWeight << " lbs\n";
    break;
  default:
    std::cout << "Invalid\n";
    break;
}
}

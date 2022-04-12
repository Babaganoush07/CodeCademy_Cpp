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

/*
========== LOGICAL OPERATORS ==========
REVIEW
Let’s try a challenging problem that will put all your brain cells to the test.

Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.
*/
#include <iostream>

int main(){
  int year;

  std::cout << "Enter a year: ";
  std::cin >> year;

  if(year < 1000 && year > 9999){
    std::cout << "Not a year.\n";
  }
  else if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    std::cout << year << " is a Leap year.\n";
  }else{
    std::cout << year << " is not a Leap year.\n";
  }
}

/*
========== LOOPS ==========
WHILE LOOPS
As an example of iteration, 
we have the first program ever to run on a stored-program computer (the EDSAC). 
It was written and run by David Wheeler in the computer laboratory at Cambridge University, England, 
on May 6th, 1948, to calculate and print a simple list of squares like the following:
0   0
1   1
2   4
3   9
4   16
5   25
6   36
7   49
8   64
9   81
*/
#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  while(i < 10){
    square = i * i;
    std::cout << i <<"   " << square << "\n";
    i++;
  } 
}

/*
FOR LOOPS
Write a 99bottles.cpp program that prints the verses of the “99 Bottles” song. 
Each stanza goes something like this:

i bottles of pop on the wall.
Take one down and pass it around.
i-1 bottles of pop on the wall.
*/
#include <iostream>

int main() {

  // Write a for loop here:
  for(int i=99; i != 0; i--){
    std::cout << i <<" bottles of pop on the wall.\nTake one down and pass it around.\n" << i-1 << " bottles of pop on the wall.\n\n";
  }
}

/*
========== ERRORS ==========
REVIEW
Because your friend didn’t debug along the way, they ended up with a super buggy program. 
Can you be a bug detective and help them debug their program?
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>

int Main() {
// int main() {
   
  srand (time(NULL));
  int	fortune = rand() % 10;
  
  if (fortune = 0) {
  // if (fortune == 0) {
    std::cout << "Flattery will go far tonight.\n";
  
  } else if (fortune == 1) {
    std::cout << "Don't behave with cold manners.\n"
    // std::cout << "Don't behave with cold manners.\n";

  } else if (fortune == 2) {
    std::cout << "May you someday be carbon neutral\n";
    
  } else if (fortune == 3) {
    std::cout << "You have rice in your teeth.\n";
    
  } else if (fortune == 4) {
    std::cout << "A conclusion is simply the place where you got tired of thinking.\n";
    
  } else if (fortune ==) {
  // } else if (fortune == 5) {
    std::cout << "No snowflake feels responsible in an avalanche.\n";
    
  } else if (fortune == 6) {
    std::cout << "He who laughs last is laughing at you.\n";
    
  } else if (fortune == 7) {
    std::cout << "If you look back, you'll soon be going that way.\n";
    
  } else if (fortune == 8) {
    std::cout << "You will die alone and poorly dressed.\n";
      
  } else if (fortune == 9 {
  // } else if (fortune == 9) {
    std::cout << "The fortune you seek is in another cookie.\n";
      
  }
  
}
/*
========== VECTORS ==========
REVIEW
Write a program to find the sum of even numbers and the product of odd numbers in a vector.
For example:
Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.
Then the program should output:
Sum of even numbers is 12
Product of odd numbers is 27
*/
#include <iostream>
#include <vector>

int main(){
  int even = 0;
  int odd = 1;
  std::vector<int> vector = {2, 4, 3, 6, 1, 9};
  for(int i = 0; i < vector.size(); i++){
    if(vector[i] %2 == 0){
      even = even + vector[i];
    }else{
      odd = odd * vector[i];
    }
  }
  std::cout << "Sum of even numbers is "<< even << "\n";
  std::cout << "Product of odd numbers is "<< odd << "\n";
}

/*
========== FUNCTIONS ==========
Try using functions to rewrite (or refactor) that IT conversation program we showed you.
*/
#include <iostream>
int check_in_attempt = 1;

void hello_it(){
  std::string on_off_attempt;
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
}

void check_in(int x){
  check_in_attempt ++;
  if(x == 1){
    // Check in with Jenn
    std::cout << "Oh hi Jen!\n";
  }else if(x == 2){
    // Check in with Roy
    std::cout << "You stole the stress machine? But that's stealing!\n";
  }
}

int main() {
  // Conduct IT support
  hello_it();
  check_in(check_in_attempt);
    
  // Conduct IT support again...
  hello_it();
  check_in(check_in_attempt);
    
  // Conduct IT support yet again...zzzz...
  hello_it();  
}

/*
========== CODE CHALLENGE: C++ FUNCTIONS ==========
========== INTRODUCTION ==========
Write a function introduction() with no return value that has:
std::string parameter named first_name.
std::string parameter named last_name.
The function should print the last_name, followed by a comma, a space, first_name another space, and finally last_name again.

For example, introduction("James", "Bond"); should print the following:
Bond, James Bond
*/
#include <iostream>

void introduction(std::string first_name, std::string last_name){
  std::cout << last_name << ", " << first_name << " " << last_name << "\n";
}

int main() {  
  introduction("Beyonce", "Knowles");
}
             
/*
========== CODE CHALLENGE: C++ FUNCTIONS ==========
========== AVERAGE ==========
Write a function average() that takes:
A double parameter named num1.
A double parameter named num2.
The function should return a double that is the average of the arguments passed in.
*/
#include <iostream>

double average(double num1, double num2){
  return (num1 + num2) / 2;
}

int main() {
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";
}

/*
========== CODE CHALLENGE: C++ FUNCTIONS ==========
========== TENTH POWER ==========
Write a function named tenth_power() that has:
An int parameter named num.
The function should return num raised to the 10th power.
*/
#include <iostream>
#include <cmath>

int tenth_power(int num){
  return pow(num, 10);
}

int main() {
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
}

/*
========== CODE CHALLENGE: C++ FUNCTIONS ==========
========== FIRST THREE MULTIPLES ==========
Write a function named first_three_multiples() that has:
An int parameter named num.
The function should return an std::vector of the first three multiples of num in ascending order.
For example, first_three_multiples(7) 
should return a vector with 7, 14, and 21.
*/
#include <iostream>
#include <vector>

std::vector<int> first_three_multiples(int num) {
  std::vector<int> multiples{num, num * 2, num * 3};
  return multiples; 
}

int main() {
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  } 
}

/*
========== CODE CHALLENGE: C++ FUNCTIONS ==========
========== WATER PLANT ==========
Define a function needs_water() that accepts:

An int number of days since the previous watering.
A bool value is_succulent. (A value of true would indicate that the plant is a succulent.)
Inside the function, you’ll need some conditional logic:

If is_succulent is false and days is greater than 3, 
return "Time to water the plant.".

If is_succulent is true and days is 12 or less, 
return "Don't water the plant!".

If is_succulent is true and days is greater than or equal to 13, 
return "Go ahead and give the plant a little water.".

Otherwise, return "Don't water the plant!".

Note: Don’t print the strings; return them from the function.
*/
#include <iostream>

std::string needs_water(int days, bool is_succulent){
  if(is_succulent == false and days > 3){
    return "Time to water the plant.";
  }else if(is_succulent == true and days <= 12){
    return "Don't water the plant!";
  }else if(is_succulent == true and days >= 13){
    return "Go ahead and give the plant a little water.";
  }else{
    return "Don't water the plant!";
  }
}

int main() {
  std::cout << needs_water(10, false) << "\n";
}

/*
========== CODE CHALLENGE: C++ FUNCTIONS ==========
========== PALINDROME ==========
Define a function is_palindrome() that takes:

An std::string parameter text.
The function should return:

true if text is a palindrome.
false if text is not a palindrome.
(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.)

We will not test for edge cases such as capitalization or spaces.
*/
#include <iostream>

bool is_palindrome(std::string text) {
  
  std::string reversetext = "";
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversetext += text[i];
  }
  
  if (reversetext == text) {
    return true;
  }
  return false;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}


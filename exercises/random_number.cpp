/*
  Write a program that generates a random number.

  Output:
  The random number is: 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
  srand(time(0));

  std::cout << "The random number is: " << rand()s;
}
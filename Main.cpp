/**
 * @file Main.cpp
 * @author Ethan Buchanan
 * @date 2022-08-30
 * @brief Hello World!
 * 
 * prints out hello world to the console
 */


#include <iostream>

using namespace std;




/**
 * adds up numbers from 1 to num then returns the value
 *
 * @param int num number of numbers in the progression
 * @pre user has given number of values in the progression
 * @return int Total sum of the values 
 * 
 */
int sum(int num);


/**
 * multiples the numbers from 1 to num then returns the value
 *
 * @param int num the number of times you will multiply by the previous values
 * @return int the total number
 * 
 */
int product(int num);

int main() {
  cout << "Hello World!" << endl;
  
  int n = 0;
  
  cout << "Please enter a number: ";
  cin >> n;
  cout << "Total Sum: " << sum(n) << endl;
  cout << "Total Product: " << product(n) << endl;

  return 0;
}


int sum(int num) {
  int total = 0;
  
  for (int i = 0; i<=num; i++) {
    total = total + i;
  }
  return total;
}

int product(int num) {
  int total = 1;

  for (int i = 1; i<=num; i++) {
    total = total * i;
  }
  return total;
}

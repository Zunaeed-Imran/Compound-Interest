#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float principalAmount,interestRate, numberofTime, time, Amount; 

  cout << "Enter Principal Amount: ";
  cin >> principalAmount;
  cout << "Enter Interest rate: ";
  cin >> interestRate;
  cout << "Enter Number of Time: ";
  cin >> numberofTime;
  cout << "Enter Time in Year: ";
  cin >> time;

  Amount = principalAmount * pow ((1 +(interestRate / numberofTime)), time);

  cout << "Compound Interest Value is: " << Amount << endl;

  return 0;
}
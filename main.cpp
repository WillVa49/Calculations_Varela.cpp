//This assignment is to work with various rithmatic operators in C++ and conditions

#include <iostream>
using namespace std;

int main() 
{
  double number1 = 0.0, number2 = 0.0;
  int number3 = 0, number4 = 0;
  double addition = 0.0, subtraction = 0.0;
  double multiplication = 0.0, division = 0.0, modulus = 0.0;
//Input 
cout << "Please enter Number 1: ";
cin >> number1;

//This is saying to repeat "Please enter Number 2" if the number = 0. Once the number doesnt equal to 0, then it can proceed
do 
{
  cout << "Please enter Number 2: ";
  cin >> number2;

  if (number2 == 0)
  cout << "\nDivision by 0 cannot be used" << endl;
}while (number2 == 0);

cout << "Please enter Number 3: ";
cin >> number3;

//This is saying to repeat "Please enter Number 4" if the number = 0. Once the number doesnt equal to 0, then it can proceed
do 
{
  cout << "Please enter Number 4: ";
  cin >> number4;

  if (number4 == 0) 
  cout << "\nDivision by 0 cannot be used" << endl;
}while (number4 == 0);

//Process
addition = number1 + number2;
subtraction = number1 - number2;
multiplication = number1 * number2;
division = number1 / number2;
modulus = number3 % number4;


//Output
cout << number1 << "+" << number2 << " = " << addition << endl;
cout << number1 << "-" << number2 << " = " << subtraction << endl;
cout << number1 << "*" << number2 << " = " << multiplication << endl;
cout << number1 << "/" << number2 << " = " << division << endl;
cout << number3 << "%" << number4 << " = " << modulus << endl;

return 0; // Exit Success
}
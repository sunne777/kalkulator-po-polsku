//Make a C++ calculator application that can add, subtract, multiply, and divide.
//The program should take in two numbers and an operator and output the answer.
//The program should also have error handling in case the user does not enter a valid number or operator.
//The program should be able to handle decimals and integers.
//The program should be able to handle negative numbers.
//The program should be able to handle division by zero.
//The program should be able to handle invalid operators.
//The program should be able to handle invalid input.
//The program should be able to handle invalid number of inputs.
//The program should be able to handle invalid number of operators.
//The program should be able to handle invalid number of operands.
//The program should be able to handle invalid number of operands and operators.
//The program should be able to handle invalid number of operands and operators and inputs.
//The program should be able to handle invalid number of operands and operators and inputs and numbers.
//The program should be able to handle invalid number of operands and operators and inputs and numbers and operators.
const int MAX = 100;
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <cmath>
#include <limits>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>
#include <cstddef>
#include <stdexcept>
#include <exception>
#include <functional>
#include <numeric>
#include <utility>
#include <typeinfo>
#include <locale>
// Start coding the calculator
using namespace std;
int main()
{
	// Declare variables
	double num1, num2, result;
	char op;
	// Ask user for input
	cout << "Wpisz pierwsza cyfre: ";
	cin >> num1;
	cout << "Wpisz operator arytmetyczny: ";
	cin >> op;
	cout << "Wpisz druga cyfre: ";
	cin >> num2;
	// Create switch statement to perform calculations
	switch (op)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		cout << "Bledny operator arytmetyczny";
		break;
	}
	// Output result
	cout << "Wynik to " << result << endl;
	return 0;

}


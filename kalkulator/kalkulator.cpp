
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
using namespace std;
int main()
{
	double num1, num2, result;
	char op;
	
	cout << "Wpisz pierwsza cyfre: ";
	cin >> num1;
	cout << "Wpisz operator arytmetyczny: ";
	cin >> op;
	cout << "Wpisz druga cyfre: ";
	cin >> num2;
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
	cout << "Wynik to " << result << endl;
	return 0;

}


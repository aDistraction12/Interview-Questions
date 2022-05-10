#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	std::cout << "Enter First number A ";
	cin >> a;
	std::cout << "Enter The value of B ";
	cin >> b;

	b = a + b;
	b = b - a;

	a = b + a;
	a = a - b;

	std::cout << "Value of B is " << a << std::endl;
	std::cout << "Value of A is " << b << std::endl;
}

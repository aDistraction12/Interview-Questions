#include <iostream>
#include <algorithm>  
using namespace std;


string str1;
string str2;
void areanargams(string str1, string str2)
{
	std::cout << "Enter the first word" << std::endl;
	cin >> str1;
	std::cout << "Enter the second word" << std::endl;
	cin >> str2;

	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	if (str1 == str2)
	{
		std::cout << "Strings are anargams" << std::endl;
	}
	else
	{
		std::cout << "Strings are not anargams" << std::endl;
	}
}

int main()
{
	areanargams(str1, str2);
}


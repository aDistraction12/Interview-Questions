#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int number;

	std::cout << "Enter a Number" << std::endl;
	cin >> number;

	for (int num = 1; num <= number; num++)
	{
		int count = 0;
		for (int i = 2; i <= num / 2; i++)
		{    
			if (num % i == 0)
			{
				 
				count++;
				break;
			}  
		} 
		if (count == 0 && num != 1)
		{
			      
			sum = sum + num;
		}  
	}  
	std::cout << "Sum of prime numbers upto the given numbers are " << sum;  
}

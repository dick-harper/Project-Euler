/*
Project Euler
projecteuler.net
Largest prime factor
Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>

bool isPrime(uint64_t uint64_t);

int main()
{
	uint64_t n = 600851475143;

	uint64_t solution = 0;

	uint64_t count = 0;

	for (uint64_t i = n / 3; i > 2;i = i - 2)
	{
		count++;

		if (n % i == 0)
		{
			// But is it prime?
			if (isPrime(i))
			{
				solution = i;
				break;
			}
		}
	}

	std::cout << "Answer: " << "???" << std::endl;
	getchar();
	return 0;
}

bool isPrime(uint64_t target)
{
	std::cout << "Prime checking " << target << ": ";

	for (uint64_t i = 2;i < target / 2;i++)\
	{
		if (target % i == 0) {
			std::cout << "false" << std::endl;
			return false;
		}
	}

	std::cout << "true" << std::endl;
	
	return true;
}
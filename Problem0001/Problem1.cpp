/*
Project Euler
projecteuler.net
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>
#include <vector>
using namespace std;



int main()
{	
	auto sum = 0;
	
	for (auto i = 0; i < 1000;i++)
	{				
		auto r3 = i % 3;
		auto r5 = i % 5;

		if(r3==0 || r5 == 0)
		{
			sum += i;
		}
	}
	
	cout << "Answer: " << sum << endl;
	
	getchar();
	
	return 0;
}
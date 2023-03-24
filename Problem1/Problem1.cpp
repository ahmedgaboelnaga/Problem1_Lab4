#include<iostream>

using namespace std;

int main()
{
	//WRITE A C++ PROGRAM TO PRINT THE COUNT AND SUM OF ALL THE INTEGERNUMBERS THAT ARE DIVISIBLE BY 9 IN THE RANGE 1 TO 200. EXCEPT ODD NUMBERS.


	int count = 0,sum = 0;

	int i = 1;
	while (i <= 200)
	{
		if (i % 2 == 0 && i % 9 == 0)
		{
			sum	= sum + i;
			count++;
		}
		i++;
	}

	cout << "count: " << count << endl;
	cout << "Sum: " << sum << endl;

	return 0;
}
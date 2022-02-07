#include <iostream>

int sum_of_digits(int& n);

int main()
{

	int n, temp, m, sum = 0;

	std::cin >> n;

	sum = sum_of_digits(n);

	while (n % sum)
	{
		n++;
		sum = sum_of_digits(n);
	}

	std::cout << n;
}

int sum_of_digits(int& n)
{
	int temp = n;
	int m, sum = 0;

	while (temp > 0)
	{
		m = temp % 10;
		sum = sum + m;
		temp = temp / 10;
	}
	return sum;
}
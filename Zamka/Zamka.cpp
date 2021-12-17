#include <iostream>


int main()
{
	int l, d, x, n, i, temp, sum = 0;
	std::cin >> l >> d >> x; //x>36

	i = l;
	while (i <= d)
	{
		n = i;
		if (n < 10)
		{
			if (i == x)
			{
				std::cout << i << std::endl;
				break;
			}
		}
		else
		{
			while (n > 0)
			{
				temp = n % 10;
				sum = sum + temp;
				n = n / 10;
			}
			if (sum == x)
			{
				std::cout << i << std::endl;
				break;
			}
		}
		sum = 0;
		i++;
	}

	sum = temp = 0;
	i = d;

	while (l <= i)
	{
		n = i;
		if (n < 10)
		{
			if (i == x)
			{
				std::cout << i << std::endl;
				break;
			}
		}
		else
		{
			while (n > 0)
			{
				temp = n % 10;
				sum = sum + temp;
				n = n / 10;
			}
			if (sum == x)
			{
				std::cout << i << std::endl;
				break;
			}
		}
		sum = 0;
		i--;
	}
}
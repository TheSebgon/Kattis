#include <iostream>
#include <string>

int main()
{
	std::string a;
	std::cin >> a;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == ';' || a[i] == ':')
		{
			if (a[i + 1] == ')')
				std::cout << i << std::endl;
			else if (a[i + 1] == '-')
				if (a[i + 2] == ')')
					std::cout << i << std::endl;
		}
	}
}
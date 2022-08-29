#include <iostream>

int main()
{
	int N, R=0;
	std::cin >> N;

	
	while (N > 0) {
		R = R << 1;
		R = R | (N & 1);
		N = N >> 1;
	}
	std::cout << R << std::endl;
}
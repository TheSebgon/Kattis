#include <iostream>
#include <vector>

void A(std::vector<int>& vec)
{
	int C,X;
	std::cin >> C >> X;
	vec.at(C-1) = X;
}

void B(std::vector<int>& vec)
{
	int A,B;
	std::cin >> A >> B;
	A--, B--;
	if (vec.at(A) > vec.at(B)) std::cout << vec.at(A) - vec.at(B) << std::endl;
	else if (vec.at(B) > vec.at(A)) std::cout << vec.at(B) - vec.at(A) << std::endl;
	else std::cout << 0 << std::endl;
}

int main()
{
	int Q, N, input, form;
	std::cin >> N >> Q;
	std::vector<int> X;

	for (int i = 0; i < N; i++)
	{
		std::cin >> input;
		X.push_back(input);
	}

	for (int i = 0; i < Q; i++)
	{
		std::cin >> form;
		if (form == 1) A(X);
		else B(X);
	}
}

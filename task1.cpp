#include <iostream>

namespace myspace
{
	void printNtimese(const char* str, int n = 10)
	{
		str = "hello";
		for (int i = 1; i <= n; i++)
		{
			std::cout << str << '\n';
		}
	}
}

int main()
{
	const char hello[10] = "hello";
	 myspace::printNtimese(hello);
}
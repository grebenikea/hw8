#include <iostream>

struct Book
{
	char title[100];
	int pages;
	float price;
};

bool isExpensive(Book& b)
{
	if (b.price >= 1000)
		return true;

	else
		return false;
}

int main()
{
	Book b = {"War and Peace", 1200, 900.0};
	bool k = isExpensive(b);
	std::cout << k;
}
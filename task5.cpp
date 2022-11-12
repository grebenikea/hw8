#include <iostream>

struct Book
{
	char title[100];
	int pages;
	float price;
};

void addPrice(Book& b, float x)
{
	b.price += x;
	return;
}

int main()
{
	Book b = {"War and Peace", 1200, 900.0};
	Book& p = b;
	addPrice(p, 100.5);
	std::cout <<p.price;

}
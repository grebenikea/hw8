#include <iostream>
#include <ctype.h>

void countLetters(const char* str, int& numLetters, int& numDigits, int& numOther)
{
	int i = 0;
	while (str[i] != 0)
	{
		if (isalpha(str[i]))
		{
			numLetters++;
			i++;
		}

		else if (isdigit(str[i]))
		{
			numDigits++;
			i++;
		}

		else
		{
			numOther++;
			i++;
		}
	}
}

int main()
{
	char string[100] = "qw1e3r@#4*t5y5%$@";
	char* String = string;
	int letters = 0;
	int digits = 0;
	int other = 0;
	int& Letters = letters;
	int& Digits = digits;
	int& Other = other;
	countLetters(String, Letters, Digits, Other);
	std::cout << Letters << " " << Digits << " " << Other;
}
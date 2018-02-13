#include "catch.hpp"
#include "str_calc.h"

#include <string>
using std::string;

int str_calc(string input)
{
	if(input == "") return 0;
	else {
		int result = std::stoi(input, nullptr);
		return result;
	}
}

/* int main()
{
	return 0;
} */
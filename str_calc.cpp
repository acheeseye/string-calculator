#include "catch.hpp"
#include "str_calc.h"

#include <string>
using std::string;

int str_calc(string input)
{
	if(input == "") 
	{
		return 0;
	}
	else 
	{
		unsigned int i = 0;
		string buf = "";
		while(input[i] != ","){
			++i;
			buf = input.substr(0, i);
		}
		
		int result = std::stoi(input, nullptr);
		return result;
	}
}

/* int main()
{
	return 0;
} */
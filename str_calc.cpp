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
	else if (input.find(",") == 0) 
	{
		int result = std::stoi(input, nullptr);
		return result;
	}
	else 
	{
		unsigned int i = 0;
		string buf1 = "";
		while(input[i] != ','){
			buf1 = input.substr(0, i);
			++i;
		}
		
		string buf2 = "";
		while(input[i] != '\0'){
			buf2 = input.substr(0, i);
			++i;
		}
		
		int add1 = std::stoi(buf1, nullptr);
		int add2 = std::stoi(buf2, nullptr);
		return add1 + add2;
	}
}

/* int main()
{
	return 0;
} */
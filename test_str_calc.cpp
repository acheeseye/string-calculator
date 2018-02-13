#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "str_calc.h"

TEST_CASE("Empty string returns 0", "[Default]"){
	REQUIRE(str_calc("")==0);
	REQUIRE(str_calc("4") == 4);
}


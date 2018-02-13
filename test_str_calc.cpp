#define CATCH_CONFIG_MAIN

#include "catch.hpp"

TEST_CASE("Empty string returns 0", "[Default]"){
	REQUIRE(str_calc("")==0);
}


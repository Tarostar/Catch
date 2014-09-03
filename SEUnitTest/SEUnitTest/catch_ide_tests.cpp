// catch_ide_tests.cpp


#include "catch.hpp"

const std::string hello("hello");
const std::string world("world");

TEST_CASE("passing")
{
	REQUIRE(hello < world);
}

TEST_CASE("failing")
{
	REQUIRE(world < hello);
}

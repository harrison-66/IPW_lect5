#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.h"

TEST_CASE("Sum of numbers", "[sum]") {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    REQUIRE(Sum(numbers) == 15);
}

TEST_CASE("Fibonacci sequence", "[fibonacci]") {
    SECTION("First 10 Fibonacci numbers") {
        REQUIRE(NthFibonacci(1) == 1);
        REQUIRE(NthFibonacci(2) == 1);
        REQUIRE(NthFibonacci(3) == 2);
        REQUIRE(NthFibonacci(4) == 3);
        REQUIRE(NthFibonacci(5) == 5);
        REQUIRE(NthFibonacci(6) == 8);
            REQUIRE(NthFibonacci(7) == 13);
        REQUIRE(NthFibonacci(8) == 21);
        REQUIRE(NthFibonacci(9) == 34);
        REQUIRE(NthFibonacci(10) == 55);
    }
    SECTION("Fibonacci number 40") {
        REQUIRE(NthFibonacci(40) == 102334155);
    }
    SECTION("negative number") {
        REQUIRE(NthFibonacci(-1) == -1);
    }
}

TEST_CASE("RemoveAllSubstrings", "[remove_all_substrings]") {
    REQUIRE(RemoveAllSubstrings("hello world", "world") == "hello ");
    REQUIRE(RemoveAllSubstrings("hello world", "o") == "hell wrld");
    REQUIRE(RemoveAllSubstrings("hello world", "l") == "heo word");
}

TEST_CASE("RemoveFirstSubstring", "[remove_first_substring]") {
    REQUIRE(RemoveFirstSubstring("hello world", "world") == "hello ");
    REQUIRE(RemoveFirstSubstring("hello world", "o") == "hell world");
    REQUIRE(RemoveFirstSubstring("hello world", "l") == "helo world");
}
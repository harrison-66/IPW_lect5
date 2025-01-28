CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11 -DCATCH_PLATFORM_MAC -D__aarch64__

all: main

clean:
	rm -f *.o main


main: test.cpp functions_to_implement.cpp catch.hpp
	$(CXX) $(CXXFLAGS) -o test test.cpp functions_to_implement.cpp

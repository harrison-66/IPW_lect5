#include <iostream>
#include <vector>
#include "functions.h"

/* String functions section */


// Sums all numbers in a vector and returns the resulting value
int Sum(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}


// takes an int, n, and returns the nth value of the fibonacci sequence (1, 1, 2, 3, 5, 8, 13, ...)
int NthFibonacci(int n){
	if(n<=0){
		return -1;
	}
	if(n==1 || n==2)
		return 1;
	else
		return NthFibonacci(n-1)+NthFibonacci(n-2);
}

// takes two strings and returns a new string that is the result of removing all occurrences of s2 from s1.
std::string RemoveAllSubstrings(std::string s1, std::string s2){
    std::string result = s1;
    size_t pos = 0;
    while((pos = result.find(s2, pos)) != std::string::npos) {
        result = result.substr(0, pos) + result.substr(pos + s2.length());
    }
    return result;
}
// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2){
    std::string result;
    size_t pos = s1.find(s2);
    if(pos != std::string::npos){
        result = s1.substr(0, pos) + s1.substr(pos + s2.length());
    }
    return result;
}

/*
int main() {
    // Test the Sum function
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int result = Sum(numbers);
    
    std::cout << "Sum of numbers {1, 2, 3, 4, 5} is: " << result << std::endl;
    
    // Test with another case
    std::vector<int> numbers2 = {10, -5, 7, 2};
    result = Sum(numbers2);
    
    std::cout << "Sum of numbers {10, -5, 7, 2} is: " << result << std::endl;
    
	int n = 5;
	int fib = NthFibonacci(n);
	std::cout << "The " << n << "th Fibonacci number is: " << fib << std::endl;


    return 0;
}*/

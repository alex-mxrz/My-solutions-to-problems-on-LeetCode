#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    [[maybe_unused]] const auto test_case = []( const std::string &haystack, const std::string &needle ) {
        std::cout << "Input: haystack = \"" << haystack << "\", needle = \"" << needle
                  << "\"\nOutput: " << task::Solution::strStr( haystack, needle ) << "\n\n";
    };

    test_case( "hello", "ll" );
    test_case( "aaaaa", "bba" );
    test_case( "", "" );
    test_case( "a", "a" );

    return 0;
}
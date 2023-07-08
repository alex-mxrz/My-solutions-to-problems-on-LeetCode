#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    std::cout << "Test cases for task" << '\n';

    // Lambda to print and test the result (Longest Common Prefix)
    auto print_and_test = []( std::vector< std::string > strs, const std::string &expected ) {
        std::cout << "Input: [ ";

        for ( auto i { 0U }; i < strs.size( ); ++i ) {
            std::cout << '"' << strs[ i ] << '"';
            if ( i != strs.size( ) - 1 ) {
                std::cout << ", ";
            } else
                std::cout << " ";
        }

        std::cout << "]\n";

        auto result { task::Solution::longestCommonPrefix( strs ) };

        std::cout << "Result: " << ( result.empty( ) ? "Empty" : result ) << " | Expected: " << ( expected.empty( ) ? "Empty" : expected )
                  << " | Status: " << ( result == expected ? "OK" : "FAIL" ) << '\n';
    };

    // Test cases
    print_and_test( { "flower", "flow", "flight" }, "fl" );
    print_and_test( { "dog", "racecar", "car" }, "" );
    print_and_test( { "a" }, "a" );
    print_and_test( { "ab", "a" }, "a" );
    print_and_test( { "blabla", "blablabla", "blablablabla" }, "blabla" );
};

#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    const auto test_case = []( const std::string &first, const std::string &second, const std::string &expected ) {
        const auto result { task::Solution::addBinary( first, second ) };

        std::cout << "For input strings \"" << first << "\" and \"" << second << "\" the result is \"" << result << "\". Expected \""
                  << expected << "\". Status: " << ( result == expected ? "Success" : "Failure" ) << std::endl;
    };

    test_case( "11", "1", "100" );
    test_case( "1010", "1011", "10101" );
    test_case( "1111", "1111", "11110" );

    return 0;
}
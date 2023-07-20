#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    const auto test_case = []( const std::string &input, const int expected ) {
        std::cout << "Input: " << input << "\n";

        const auto output = task::Solution::lengthOfLastWord( input );

        std::cout << "Result: " << ( output == expected ? "SUCCESS" : "FAILURE" ) << "\n\n";
    };

    test_case( "Hello World", 5 );
    test_case( " ", 0 );
    test_case( "a ", 1 );
    test_case( "b   a    ", 1 );
    test_case( "  fly me   to   the moon  ", 4 );
    test_case( "luffy is still joyboy", 6 );

    return 0;
}
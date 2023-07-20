#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    [[maybe_unused]] const auto test_case = []( const std::string &input_first, const std::string &input_second ) {
        const auto result = task::Solution::gcdOfStrings( input_first, input_second );

        std::cout << "For input strings: \"" << input_first << "\" and \"" << input_second << "\"\n"
                  << "the result is: \"" << result << "\"\n\n";
    };

    test_case( "ABCABC", "ABC" );
    test_case( "ABABAB", "ABAB" );
    test_case( "LEET", "CODE" );
    test_case( "ABCDEF", "ABC" );

    return 0;
}
#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    [[maybe_unused]] const auto test_case = []( const std::string &input_first, const std::string &input_second ) {
        const auto result { task::Solution::mergeAlternately( input_first, input_second ) };

        std::cout << "For input strings: \"" << input_first << "\" and \"" << input_second << "\"\n"
                  << "the result is: \"" << result << "\"\n\n";
    };

    test_case( "abc", "pqr" );
    test_case( "ab", "pqrs" );
    test_case( "abcd", "pq" );
    test_case( "ab", "pq" );

    return 0;
}
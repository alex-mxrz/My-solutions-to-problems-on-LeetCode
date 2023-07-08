#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    std::cout << "Test cases for task" << '\n';

    // Lambda to print and test a roman numeral
    const auto test_roman_numeral = []( const std::string &roman_numeral, const int expected_result ) {
        const auto result { task::Solution::romanToInt( roman_numeral ) };
        std::cout << "romanToInt( \"" << roman_numeral << "\" ) = " << result << " (expected " << expected_result << ") "
                  << ( result == expected_result ? "PASSED" : "FAILED" ) << '\n';
    };

    // Test cases
    test_roman_numeral( "III", 3 );
    test_roman_numeral( "IV", 4 );
    test_roman_numeral( "IX", 9 );
    test_roman_numeral( "LVIII", 58 );
    test_roman_numeral( "MCMXCIV", 1994 );
    test_roman_numeral( "MMXXI", 2021 );

    return 0;
}
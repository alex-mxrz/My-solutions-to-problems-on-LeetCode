#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    const auto test_case = []( const int x, const int expected ) {
        const auto result = task::Solution::mySqrt( x );

        std::cout << "Input: x = " << x << "\n"
                  << "Output: " << result << "\n"
                  << "Expected: " << expected << "\n\n";
    };

    test_case( 4, 2 );
    test_case( 8, 2 );
    test_case( 9, 3 );
    test_case( 10, 3 );
    test_case( 11, 3 );

    return 0;
}
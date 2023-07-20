#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    const auto test_case = []( const int n, const int expected ) {
        std::cout << "Case: n = " << n << ", expected = " << expected << '\n';

        const auto result = task::Solution::climbStairs( n );

        std::cout << "Result: " << result << " Status: " << ( result == expected ? "Passed" : "Failed" ) << '\n';
    };

    test_case( 2, 2 );
    test_case( 3, 3 );
    test_case( 4, 5 );
    test_case( 5, 8 );
    test_case( 6, 13 );
    test_case( 7, 21 );
    test_case( 8, 34 );
    test_case( 9, 55 );

    return 0;
}
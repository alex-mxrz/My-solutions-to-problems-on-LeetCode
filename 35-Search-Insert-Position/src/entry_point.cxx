#include "task.hxx" // IWYU pragma: keep

#include <iostream>
#include <vector>

int main( ) { // The lambda function for print and tes the task (Search Insert Position)
    const auto test_case = []( std::vector< int > input, int target, int expected ) {
        std::cout << "Input: [ ";

        const auto input_size { static_cast< int >( input.size( ) ) };

        // Print vector input with , separator
        for ( auto i { 0 }; i < input_size; ++i ) {
            std::cout << input.at( i );
            if ( i != input_size - 1 ) {
                std::cout << ", ";
            }
        }

        std::cout << " ]";

        const auto function { task::Solution::searchInsert( input, target ) };

        std::cout << "\nTarget: " << target << "\nExpected: " << expected << "\nOutput: " << function
                  << "\nStatus: " << ( function == expected ? "PASSED" : "FAILED" ) << "\n\n";
    };

    test_case( { 1, 3, 5, 6 }, 5, 2 );
    test_case( { 1, 3, 5, 6 }, 2, 1 );
    test_case( { 1, 3, 5, 6 }, 7, 4 );
    test_case( { 1, 3, 5, 6 }, 0, 0 );

    return 0;
}
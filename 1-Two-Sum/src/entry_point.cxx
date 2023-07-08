#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    std::cout << "Test cases for task" << '\n';

    // Lambda to calculate two sum (task::Solution::twoSum) and print the status
    auto two_sum { []( std::vector< int > input, std::vector< int > output, int target ) {
        std::cout << "Test case: ( nums - [";

        const auto input_size { static_cast< std::int32_t >( input.size( ) ) };

        for ( auto i { 0 }; i < input_size; ++i ) {
            std::cout << input.at( i );
            if ( i != input_size - 1 ) {
                std::cout << ',' << ' ';
            }
        }
        std::cout << "], target - " << target << " ) ";

        auto result { task::Solution::twoSum( input, target ) };

        std::cout << "Status: " << ( result == output ? "Passed" : "Failed" ) << '\n';
    } };

    // Test case 1
    two_sum( { 2, 7, 11, 15 }, { 0, 1 }, 9 );

    // Test case 2
    two_sum( { 3, 2, 4 }, { 1, 2 }, 6 );

    // Test case 3
    two_sum( { 3, 3 }, { 0, 1 }, 6 );
};

#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    const auto test_case = []( const std::vector< int > &input, const int expected ) {
        std::cout << "Input: [";

        const auto input_size { static_cast< int >( input.size( ) ) };

        for ( auto i { 0 }; i < input_size; ++i ) {
            std::cout << input.at( i );

            if ( i != input_size - 1 )
                std::cout << ", ";
        }

        std::cout << "]\n";

        auto temp_input { input };

        std::cout << "Expected: " << expected << "\n";

        const auto result { task::Solution::removeElement( temp_input, expected ) };

        std::cout << "Output: [";

        const auto temp_input_size { static_cast< int >( temp_input.size( ) ) };

        for ( auto i { 0 }; i < temp_input_size; ++i ) {
            std::cout << temp_input.at( i );

            if ( i != temp_input_size - 1 )
                std::cout << ", ";
        }

        std::cout << "]\n";

        std::cout << "Result: " << result << "\n\n";
    };

    test_case( { 0, 1, 2, 2, 3, 0, 4, 2 }, 2 );
    test_case( { 3, 2, 2, 3 }, 3 );
    test_case( { 0, 5, 1, 2, 3, 0, 4, 2 }, 0 );
    test_case( { 3, 2, 2, 3 }, 2 );

    return 0;
}
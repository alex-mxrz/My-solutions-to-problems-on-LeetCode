#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    const auto test_case = []( const std::vector< int > &input, const std::vector< int > &expected ) {
        auto input_copy { input };
        auto output { task::Solution::plusOne( input_copy ) };

        std::cout << "Input: [ ";

        for ( const auto &digit : input )
            std::cout << digit << ' ';

        std::cout << "]\n";

        std::cout << "Output: [ ";

        for ( const auto &digit : output )
            std::cout << digit << ' ';

        std::cout << "]\n";

        std::cout << "Expected: [ ";

        for ( const auto &digit : expected )
            std::cout << digit << ' ';

        std::cout << "]\n";

        std::cout << "Result: " << ( output == expected ? "SUCCESS" : "FAILURE" ) << "\n\n";
    };

    test_case( { 1, 2, 3 }, { 1, 2, 4 } );
    test_case( { 4, 3, 2, 1 }, { 4, 3, 2, 2 } );
    test_case( { 0 }, { 1 } );
    test_case( { 9 }, { 1, 0 } );
    test_case( { 9, 9 }, { 1, 0, 0 } );
    test_case( { 9, 9, 9 }, { 1, 0, 0, 0 } );

    return 0;
}
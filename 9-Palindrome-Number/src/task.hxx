#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

#include <vector>

namespace task {
    class Solution {
      public:
        static bool isPalindrome( int x ) {
            // Check if the number is negative or zero
            if ( x <= 0 ) {
                // Return true if the number is zero, false otherwise (negative number cannot be a palindrome, zero can)
                return x == 0;
            }

            const auto get_digits_vector = [ &x ]( ) {
                // The vector of digits of the number
                auto digits { std::vector< std::int16_t > {} };

                // Iters over the digits of the number
                while ( x != 0 ) {
                    // Get the last digit of the number
                    const auto last_digit { static_cast< std::int16_t >( x % 10 ) };

                    // Remove the last digit from the number
                    x /= 10;

                    // Add the last digit to the vector of digits
                    digits.emplace_back( last_digit );
                }

                // Return the vector of digits
                return digits;
            };

            // Get the vector of digits of the number
            const auto digits { get_digits_vector( ) };

            // Get the size of the vector of digits
            const auto digits_size { static_cast< int >( digits.size( ) ) };

            // Check if the number is a palindrome
            auto is_palindrome { true };

            // Iters over the half of the vector of digits
            for ( auto i { 0 }; i < digits_size / 2; ++i ) {
                // Check if current digit is equal to the digit on the opposite side
                if ( digits.at( i ) != digits.at( digits_size - i - 1 ) ) {
                    // If not, set the flag to false and break the loop
                    is_palindrome = false;
                    break;
                }
            }

            // Return the result
            return is_palindrome;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
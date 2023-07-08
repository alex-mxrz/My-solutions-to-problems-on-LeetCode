#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

#include <string>
#include <unordered_map>

// Runtime: 8 ms, faster than 80.34% of C++ online submissions for Two Sum.
// Memory Usage: 6.0 MB, beat 69.95% of C++ online submissions for Two Sum.

namespace task {
    class Solution {
      public:
        static int romanToInt( std::string s ) {
            // The container that holds the roman numerals and their corresponding values
            static const auto roman_numerals {
                std::unordered_map< std::uint8_t, std::uint32_t > {{ 'I', 1 },
                                                                   { 'V', 5 },
                                                                   { 'X', 10 },
                                                                   { 'L', 50 },
                                                                   { 'C', 100 },
                                                                   { 'D', 500 },
                                                                   { 'M', 1000 }}
            };

            // The result of the conversion
            auto result { std::uint32_t {} };

            // Iterate over the string
            for ( auto i { 0 }; i < static_cast< int >( s.size( ) ) - 1; ++i ) {
                // If the current value is greater than or equal to the next value, add it to the result
                if ( const auto current_value = roman_numerals.at( s.at( i ) );
                     current_value >= roman_numerals.at( s.at( static_cast< std::size_t >( i ) + 1 ) ) ) {
                    result += current_value;
                } else
                    result -= current_value;
            }

            // Add the last value to the result
            result += roman_numerals.at( s.at( s.size( ) - 1 ) );

            // Return the result
            return static_cast< int >( result );
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
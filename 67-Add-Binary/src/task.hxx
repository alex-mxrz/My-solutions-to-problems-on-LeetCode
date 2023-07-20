#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 42.42 % of cpp submissions.

#include <algorithm>
#include <string>

namespace task {
    class Solution {
      public:
        static std::string addBinary( std::string first, std::string second ) {
            auto output_string { std::string {} };

            auto carry { 0 };

            auto first_index { static_cast< int >( first.size( ) ) - 1 };
            auto second_index { static_cast< int >( second.size( ) ) - 1 };

            while ( first_index >= 0 || second_index >= 0 ) {
                auto sum { carry };

                if ( first_index >= 0 ) {
                    sum += first.at( first_index ) - '0';
                    --first_index;
                }

                if ( second_index >= 0 ) {
                    sum += second.at( second_index ) - '0';
                    --second_index;
                }

                carry = sum / 2;

                output_string.push_back( sum % 2 + '0' );
            }

            if ( carry != 0 )
                output_string.push_back( '1' );

            std::reverse( output_string.begin( ), output_string.end( ) );

            return output_string;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
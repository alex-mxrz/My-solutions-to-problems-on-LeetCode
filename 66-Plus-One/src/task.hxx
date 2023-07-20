#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 74.91 % of cpp submissions.

#include <vector>

namespace task {
    class Solution {
      public:
        static std::vector< int > plusOne( std::vector< int > &digits ) {
            auto output_vector { std::vector< int > {} };

            auto carry { 1 };

            for ( auto i { static_cast< int >( digits.size( ) ) - 1 }; i >= 0; --i ) {
                auto digit { digits.at( i ) + carry };
                carry = digit / 10;

                output_vector.insert( output_vector.begin( ), digit % 10 );
            }

            if ( carry > 0 )
                output_vector.insert( output_vector.begin( ), carry );

            return output_vector;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
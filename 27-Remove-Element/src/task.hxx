#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00% of cpp submissions.
// Memory Benchmark: Beats 99.57% of cpp submissions.

#include <vector>

namespace task {
    class Solution {
      public:
        static int removeElement( std::vector< int > &nums, int val ) {
            auto counter { 0 };

            const auto vector_size { static_cast< int >( nums.size( ) ) };

            for ( auto i { 0 }; i < vector_size; ++i ) {
                if ( nums.at( i ) != val ) {
                    nums.at( i - counter ) = nums.at( i );
                } else
                    counter++;
            }

            return vector_size - counter;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
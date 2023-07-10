#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

#include <vector>

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 98.77 % of cpp submissions.

namespace task {
    class Solution {
      public:
        static int searchInsert( std::vector< int > &nums, int target ) {
            /* Perform simple binary search */

            // The Left index
            auto left { 0 };
            // The Right index
            auto right { static_cast< int >( nums.size( ) ) };

            // Loop until left index is less than right index
            while ( left < right ) {
                // The middle index
                const auto mid { left + ( right - left ) / 2 };
                // The middle value
                const auto mid_value { nums.at( mid ) };

                // Check if the middle value is equal to target, then return the middle index
                if ( mid_value == target )
                    return mid;

                // Check if the middle value is less than target, then move the left index to middle index + 1
                if ( mid_value < target ) {
                    left = mid + 1;
                } else
                    right = mid;
            }

            // Return the left index
            return left;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 73.10 % of cpp submissions.

#include <algorithm>
#include <string>

namespace task {
    class Solution {
      public:
        static int climbStairs( int n ) {
            if ( n <= 2 )
                return n;

            auto first_step { 1 };
            auto second_step { 1 };

            while ( n > 0 ) {
                first_step = ( second_step += first_step ) - first_step;
                --n;
            }

            return first_step;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
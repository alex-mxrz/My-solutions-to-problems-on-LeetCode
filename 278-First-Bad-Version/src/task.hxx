#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 85.41 % of cpp submissions.

namespace task {
    bool isBadVersion( int version );

    class Solution {
      public:
        static int firstBadVersion( int n ) {
            auto left { 0 };

            while ( left <= n ) {
                const auto mid { left + ( n - left ) / 2 };
                const auto mid_value { isBadVersion( mid ) };

                if ( mid_value ) {
                    n = mid - 1;
                } else
                    left = mid + 1;
            }

            return left;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 42.44 % of cpp submissions.

namespace task {
    class Solution {
      public:
        static int mySqrt( int x ) {
            auto temp { x };

            while ( temp * temp > x )
                temp = ( temp + x / temp ) / 2;

            return temp;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
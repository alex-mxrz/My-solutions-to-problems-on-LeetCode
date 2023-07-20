#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 99.95 % of cpp submissions.

#include <string>

namespace task {
    class Solution {
      public:
        static int strStr( std::string haystack, std::string needle ) {
            if ( needle.empty( ) )
                return -1;

            if ( const auto found { haystack.find( needle ) }; found != std::string::npos )
                return static_cast< int >( found );

            return -1;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
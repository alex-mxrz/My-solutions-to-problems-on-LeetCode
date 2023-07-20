#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00% of cpp submissions.
// Memory Benchmark: Beats 99.85% of cpp submissions.

#include <string>

namespace task {
    class Solution {
      public:
        static int lengthOfLastWord( std::string s ) {
            auto word_length { 0 };

            if ( const auto founded { s.find_last_not_of( ' ' ) }; founded != std::string::npos ) {
                for ( auto i { founded }; i >= 0; --i ) {
                    if ( s.at( i ) == ' ' )
                        break;

                    ++word_length;

                    if ( i == 0 )
                        break;
                }
            }

            return word_length;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
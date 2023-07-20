#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 90.11 % of cpp submissions.

#include <string>

constexpr std::size_t gdc_length( const std::size_t size1, const std::size_t size2 ) noexcept {
    return size2 == 0 ? size1 : gdc_length( size2, size1 % size2 );
}

namespace task {
    class Solution {
      public:
        static std::string gcdOfStrings( const std::string &str1, const std::string &str2 ) {
            if ( str1 + str2 != str2 + str1 )
                return { };

            const auto gdc = gdc_length( str1.size( ), str2.size( ) );

            return str1.substr( 0, gdc );
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
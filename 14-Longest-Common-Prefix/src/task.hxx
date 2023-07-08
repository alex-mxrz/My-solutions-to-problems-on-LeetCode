#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

#include <algorithm>
#include <string>
#include <vector>

// Runtime: 8 ms, faster than 39.59% of C++ online submissions for Longest Common Prefix.
// Memory Usage: 7.1 MB, beat 80.24% of C++ online submissions for Longest Common Prefix.

namespace task {
    class Solution {
      public:
        static std::string longestCommonPrefix( std::vector< std::string > &strs ) {
            // The string of the longest common prefix
            auto current_prefix { std::string {} };

            // Iterate over the first string
            for ( auto i { 0 }; i < static_cast< int >( strs.at( 0 ).size( ) ); ++i ) {
                // Get the symbol from the first string
                const auto symbol { strs.at( 0 ).at( i ) };

                // Iterate over the other strings
                for ( auto j { 0 }; j < static_cast< int >( strs.size( ) ); ++j ) {
                    // If the symbol is not equal to the symbol from the first string or the index is out of range
                    if ( i >= static_cast< int >( strs.at( j ).size( ) ) || symbol != strs.at( j ).at( i ) )
                        return current_prefix;
                }

                // Add the symbol to the prefix
                current_prefix.push_back( symbol );
            }

            // Return the prefix
            return current_prefix;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
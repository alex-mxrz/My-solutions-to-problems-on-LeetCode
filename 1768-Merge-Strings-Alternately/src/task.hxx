#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

// Runtime: Beats 100.00 % of cpp submissions.
// Memory Benchmark: Beats 81.08 % of cpp submissions.

#include <string>

namespace task {
    class Solution {
      public:
        static std::string mergeAlternately( std::string word1, std::string word2 ) {
            if ( word1.empty( ) || word2.empty( ) )
                return { };

            const auto word1_size { static_cast< int >( word1.size( ) ) };
            const auto word2_size { static_cast< int >( word2.size( ) ) };

            const auto lagger_string_size { std::max( word1_size, word2_size ) };

            auto merged_string { std::string {} };

            for ( auto i { 0 }; i < lagger_string_size; ++i ) {
                if ( i < word1_size )
                    merged_string.push_back( word1.at( i ) );

                if ( i < word2_size )
                    merged_string.push_back( word2.at( i ) );
            }

            return merged_string;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
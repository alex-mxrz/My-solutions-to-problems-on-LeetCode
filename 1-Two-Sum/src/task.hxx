#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

#include <unordered_map>
#include <vector>

// Runtime: 8 ms, faster than 94.96% of C++ online submissions for Two Sum.
// Memory Usage: 10.9 MB, beat 45.51% of C++ online submissions for Two Sum.

namespace task {
    class Solution {
      public:
        static std::vector< int > twoSum( std::vector< int > &nums, int target ) {
            // The unordered_map container to use as a hash table for fast lookup. The container store [index, value]
            auto numbers_map { std::unordered_map< std::int32_t, std::int32_t > {} };

            // The size of the vector
            const auto vector_size { static_cast< std::int32_t >( nums.size( ) ) };

            // Iterate over the vector
            for ( auto i { 0 }; i < vector_size; ++i ) {
                // The value to find
                const auto value_to_find { target - nums.at( i ) };

                // Check if the value is in the container (hash table)
                if ( const auto found { numbers_map.find( value_to_find ) }; found != numbers_map.end( ) ) {
                    // Return the indexes of the values
                    return { found->second, i };
                }

                // Insert the value in the hash table
                numbers_map.try_emplace( nums.at( i ), i );
            }

            // Return an empty vector
            return { };
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
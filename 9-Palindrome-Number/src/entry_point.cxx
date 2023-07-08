#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    std::cout << "Test cases for task" << '\n';

    std::cout << "Test case 1: ( 121 ) "
              << "Status: " << task::Solution::isPalindrome( 121 ) << '\n';

    std::cout << "Test case 2: ( -121 ) "
              << "Status: " << task::Solution::isPalindrome( -121 ) << '\n';

    std::cout << "Test case 3: ( 10 ) "
              << "Status: " << task::Solution::isPalindrome( 10 ) << '\n';

    std::cout << "Test case 4: ( -1 ) "
              << "Status: " << task::Solution::isPalindrome( -1 ) << '\n';

    return 0;
}
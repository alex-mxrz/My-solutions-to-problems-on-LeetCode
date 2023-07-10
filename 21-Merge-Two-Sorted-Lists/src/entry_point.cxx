#include "task.hxx" // IWYU pragma: keep

#include <iostream>

int main( ) {
    const auto test_case = []( task::ListNode *list1, task::ListNode *list2 ) {
        std::cout << "Input: list1 = [";

        for ( auto *node = list1; node != nullptr; node = node->next )
            std::cout << node->val << ( node->next != nullptr ? ", " : "" );

        std::cout << "], list2 = [";

        for ( auto *node = list2; node != nullptr; node = node->next )
            std::cout << node->val << ( node->next != nullptr ? ", " : "" );

        std::cout << "]\n";

        const auto *result = task::Solution::mergeTwoLists( list1, list2 );

        std::cout << "Output: [";

        for ( const auto *node = result; node != nullptr; node = node->next )
            std::cout << node->val << ( node->next != nullptr ? ", " : "" );

        std::cout << "]\n\n";

        return 0;
    };

    test_case( new task::ListNode( 1, new task::ListNode( 2, new task::ListNode( 4 ) ) ),
               new task::ListNode( 1, new task::ListNode( 3, new task::ListNode( 4 ) ) ) );

    test_case( nullptr, nullptr );

    test_case( nullptr, new task::ListNode( 0 ) );
}
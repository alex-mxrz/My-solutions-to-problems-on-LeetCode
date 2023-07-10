#ifndef PROJECT_SRC_TASK_HXX
#define PROJECT_SRC_TASK_HXX

#include <algorithm>

// Runtime: Beats 81.45 % of cpp submissions.
// Memory Benchmark: Beats 96.77 % of cpp submissions.

namespace task {
    struct ListNode {
        ListNode( ) = default;

        explicit ListNode( int x ) : val( x ) { }

        ListNode( int x, ListNode *next ) : val( x ), next( next ) { }

        int       val { };
        ListNode *next { };
    };

    class Solution {
      public:
        static ListNode *mergeTwoLists( ListNode *list1, ListNode *list2 ) {
            if ( list1 == nullptr )
                return list2;

            if ( list2 == nullptr )
                return list1;

            if ( list1->val > list2->val )
                std::swap( list1, list2 );

            if ( list1 != nullptr )
                list1->next = mergeTwoLists( list1->next, list2 );

            return list1;
        }
    };
} // namespace task

#endif // !PROJECT_SRC_TASK_HXX
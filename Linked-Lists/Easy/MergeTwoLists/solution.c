#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* p1 = list1;     
    struct ListNode* p2 = list2;     
    struct ListNode* mergedList = malloc(sizeof(struct ListNode));      // dummy node
    struct ListNode* current = mergedList;     

    while (p1 != NULL && p2 != NULL) {

        if (p1->val < p2->val) {
            current->next = p1;
            p1 = p1->next;
        }
        else {
            current->next = p2;
            p2 = p2->next;
        }
        current = current->next;
    }

     // Append the remaining nodes from list1 or list2
    if (p1 != NULL)
        current->next = p1;
    else
        current->next = p2;

    struct ListNode* result = mergedList->next;
    free(mergedList);

    return result;
}

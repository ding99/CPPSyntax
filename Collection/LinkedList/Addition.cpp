#include <iostream>
#include "Addition.h"

void Addition::start() {
    std::cout << "== Addition Tests\n";

    test(new int[] {2, 4, 3}, 3, new int[] { 5, 6, 4 }, 3);
    test(new int[] {0}, 1, new int[] {0}, 1);
    test(new int[] {9, 9, 9, 9, 9, 9, 9}, 7, new int[] {9, 9, 9, 9}, 4);
}

void Addition::dsp(ListNode* node) {
    while(node != NULL) {
        std::cout << node->val << " ";
        node = node->next;
    }
    std::cout << "\n";
}

ListNode* Addition::newList(int a[], int size) {
    ListNode *current = NULL, *start = NULL, *temp = NULL;
    for(int i = 0; i < size; i++){
        temp = new ListNode(a[i]);
        (start == NULL ? start : current->next) = temp;
        current = temp;
    }
    return start;
}

void Addition::test(int a1[], int size1, int a2[], int size2) {
    std::cout << "-- one test\n";
    ListNode* list1 = newList(a1, size1); dsp(list1);
    ListNode* list2 = newList(a2, size2); dsp(list2);
    dsp(addTwoNumbers(list1, list2));
}

ListNode* Addition::addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode *start = NULL, *current = NULL, *temp = NULL;

    while (l1 != NULL || l2 != NULL) {
        if (l1 != NULL) { carry += l1->val; l1 = l1->next; }
        if (l2 != NULL) { carry += l2->val; l2 = l2->next; }

        temp = new ListNode(carry % 10);
        (start == NULL ? start : current->next) = temp;
        current = temp;
        carry /= 10;
    }

    if (carry > 0 && current != NULL)
        current->next = new ListNode(carry);

    return start;
}

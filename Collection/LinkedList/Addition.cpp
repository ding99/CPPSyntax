#include <iostream>
#include <exception>
#include "Addition.h"

void Addition::start() {
    std::cout << "== Addition Start\n";

    int a1[] = {2, 4, 3}, a2[] = {5, 6, 4};
    test(a1, 3, a2, 3);
}

void Addition::dsp(ListNode* node) {
    ListNode *temp = NULL;
    int size = 0;
    if(node != NULL) do {
        std::cout << node->val << "/" << (node->next == NULL) << " ";
        node = node->next;
        size++;
    } while (node != NULL);
    std::cout << "size " << size << "\n";
}

ListNode* Addition::newList(int a[], int size) {
    ListNode *current = NULL, *start = NULL, *temp = NULL;
    for(int i = 0; i < size; i++){
        temp = new ListNode(a[i]);
        (start == NULL ? start : current->next) = temp;
        current = temp;
    }
    dsp(start);
    return start;
}

void Addition::test(int a1[], int size1, int a2[], int size2) {
    ListNode *list1 = newList(a1, size1), *list2 = newList(a2, size2);
    dsp(addTwoNumbers(list1, list2));
}

ListNode* Addition::addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode *start = NULL, *current = start, *temp = NULL;

    int i = 0;
    while (l1 != NULL || l2 != NULL) {
        std::cout << ++i << ": " << carry << " / " << (l1 != NULL ? l1->val : NULL) << " / " << (l2 != NULL ? l2->val : NULL);
        if (l1 != NULL) { carry += l1->val; l1 = l1->next; }
        if (l2 != NULL) { carry += l2->val; l2 = l2->next; }
        std::cout << " / " << carry;
        temp = new ListNode(carry % 10);
        (start == NULL ? start : current->next) = temp;
        current = temp;
        carry /= 10;
        std::cout << "\n";
    }

    if (carry > 0 && current != NULL)
        current->next = new ListNode(carry);

    return start;
}

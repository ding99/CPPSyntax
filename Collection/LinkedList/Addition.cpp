#include <iostream>
#include "Addition.h"

void Addition::start() {
    std::cout << "== Addition Start\n";

    int a1[] = { 2, 4, 3 }, a2[] = { 5, 6, 4 };
    test(a1, 3, a2, 3);
}

void Addition::dsp(ListNode* node) {
    ListNode *temp = NULL;
    std::cout << "node is null <" << (node == NULL) << ">\n";
    int size = 0;
    if(node != NULL) do {
        std::cout << node->val + " ";
        node = node->next;
        size++;
    } while (node != NULL);
    std::cout << "size "<< size << "\n";
}

ListNode* Addition::newList(int a[], int size) {
    for (int i = 0; i < size; i++) std::cout << a[i] << " ";
    std::cout << "original size " << size << "\n";
    ListNode *current = NULL, *start = NULL, *temp = NULL;
    for(int i = 0; i < size; i++){
        temp = new ListNode(a[i]);
        if (start != NULL) current->next = temp; else start = current = temp;
        current = temp;
    }
    return start;
}

void Addition::test(int a1[], int size1, int a2[], int size2) {
    ListNode *list1 = newList(a1, size1), *list2 = newList(a2, size2);
    dsp(list1);
    dsp(list2);
}

ListNode* Addition::addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode* sum = NULL;
    bool b1 = true, b2 = true;

    while (b1 | b2) {

    }

    if (carry > 0) {
        ListNode* add = new ListNode();
        add->val = carry;
        add->next = NULL;
        sum->next = add;
    }

    return sum;
}

#pragma once
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Addition
{
public:
    void start();

private:
    ListNode* addTwoNumbers(ListNode*,ListNode*);
    ListNode* newList(int[], int);
    void test(int[], int, int[], int);
    void dsp(ListNode*);
};


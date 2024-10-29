//https://leetcode.cn/problems/remove-nth-node-from-end-of-list/description/
#include <bits/stdc++.h>  
using namespace std;  
struct ListNode {  
    int val;  //定义节点
    ListNode* next;  //定义指针
    ListNode(int x) : val(x), next(nullptr) {}  
    ListNode(int x, ListNode* nextNode) : val(x), next(nextNode) {}  
}; 
class Solution1 {
public:
    int getLength(ListNode* head) {
        int length = 0;
        while (head) {
            ++length;
            head = head->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        int length = getLength(head);
        ListNode* cur = dummy;
        for (int i = 1; i < length - n + 1; ++i) {
            cur = cur->next;
        }
        cur->next = cur->next->next;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};
class Solution2 {
public:
    int index = 0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr)
            return head;
        head->next = removeNthFromEnd(head->next, n);
        index++;
        if (n == index) {
            ListNode* temp = head->next;
            delete head;
            return temp;
        }
        return head;
    }
};

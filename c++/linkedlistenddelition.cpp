#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}};
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int counter = 0;
        while(temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        if(counter == n)
        {
            head = head->next;
        }
        int pos = counter-n;
        temp = head;
        while(temp !=NULL)
        {
            pos--;
            if(pos == 0)
            break;
            temp = temp ->next;
        }
        
        ListNode* deletenode = temp ->next;
        
        temp ->next = temp->next ->next;
        return head;
    }
};
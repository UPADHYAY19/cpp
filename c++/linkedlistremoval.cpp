#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        if (head == NULL || head->next == NULL) {
            return head;
        }

        vector<int> v;

        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        unordered_map<int, int> countMap;

        for (int i = 0; i < v.size(); i++) {
            countMap[v[i]]++;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;

        int i = 0;

        while (curr != NULL) {
            if (countMap[v[i]] > 1) {
                if (prev == NULL) {
                    head = curr->next;
                } else {
                    prev->next = curr->next;
                }
                delete curr;
            } else {
                prev = curr;
            }
            curr = curr->next;
            i++;
        }

        return head;
    }
};

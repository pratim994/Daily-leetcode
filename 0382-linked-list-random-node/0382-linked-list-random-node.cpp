/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    Solution(ListNode* head) : m_head(head){
      
    }
    
    int getRandom() {
        int nodesSeenTillNow = {};

        ListNode* curr = m_head;
        ListNode *randomNode = nullptr;

        while(curr!= nullptr){
            ++nodesSeenTillNow;
            int randomIndex = rand()%nodesSeenTillNow;
            if(randomIndex == nodesSeenTillNow-1) randomNode = curr;

            curr = curr->next;

        }
        return randomNode->val;
    }


private:
    ListNode *m_head = nullptr;


};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
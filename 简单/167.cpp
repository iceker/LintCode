/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode *addLists(ListNode *l1, ListNode *l2) {
        // write your code here
        ListNode *p = l1;
        ListNode *q = l2;
        
        int num = 0, c = 0;
        
        ListNode *pHead = NULL;  //链表的头结点 
        ListNode *pTemp = NULL;  //链表的尾结点 
        
        //将链表相同长度部分相加 
        while(p != NULL && q != NULL)
        {
            num = p->val + q->val + c;
            c = num / 10;
            num = num % 10;
            
            ListNode *Node = new ListNode(num);
            
            if(pHead == NULL)
            {
                pHead = Node;
            }
            else
            {
                pTemp->next = Node;
            }
            
            pTemp = Node;
            
            p = p->next;
            q = q->next;
        }
        
        //如果p链表长，将长的部分加上 
        while(p != NULL)
        {
            num = p->val + c;
            c= num / 10;
            num = num % 10;
            
            ListNode *Node = new ListNode(num);
            if(pHead == NULL)
            {
                pHead = Node;
            }
            else
            {
                pTemp->next = Node;
            }
            
            pTemp = Node;
            
            p = p->next;
        }
        
        //如果q链表长，将长的部分加上 
        while(q != NULL)
        {
            num = q->val + c;
            c= num / 10;
            num = num % 10;
            
            ListNode *Node = new ListNode(num);
            if(pHead == NULL)
            {
                pHead = Node;
            }
            else
            {
                pTemp->next = Node;
            }
            
            pTemp = Node;
            
            q = q->next;
        }
        
        //如果还有进位，将进位加上 
        if(c != 0)
        {
            ListNode *Node = new ListNode(c);
            pTemp->next = Node;
        }
        
        return pHead;
        
        
    }
};

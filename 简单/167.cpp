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
        
        ListNode *pHead = NULL;  //�����ͷ��� 
        ListNode *pTemp = NULL;  //�����β��� 
        
        //��������ͬ���Ȳ������ 
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
        
        //���p�����������Ĳ��ּ��� 
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
        
        //���q�����������Ĳ��ּ��� 
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
        
        //������н�λ������λ���� 
        if(c != 0)
        {
            ListNode *Node = new ListNode(c);
            pTemp->next = Node;
        }
        
        return pHead;
        
        
    }
};

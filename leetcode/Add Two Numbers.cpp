class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int countL1 = 0, countL2 = 0;
        ListNode *l1Ptr = l1;
        ListNode *l2Ptr = l2;
        ListNode *result;
        ListNode *resultPtr;

        while(l1Ptr != nullptr)
        {
            ++countL1;
            l1Ptr = l1Ptr -> next;
        }

        while(l2Ptr != nullptr)
        {
            ++countL2;
            l2Ptr = l2Ptr -> next;
        }

        l1Ptr = l1;
        l2Ptr = l2;

        if(countL1 >= countL2)
        {
            result = l1Ptr;
            resultPtr = result;

            while(l2Ptr != nullptr)
            {
                resultPtr -> val += l2Ptr -> val;

                resultPtr = resultPtr -> next;
                l2Ptr = l2Ptr -> next;
            }
        }
        else
        {
            result = l2Ptr;
            resultPtr = result;

            while(l1Ptr != nullptr)
            {
                resultPtr -> val += l1Ptr -> val;

                resultPtr = resultPtr -> next;
                l1Ptr = l1Ptr -> next;
            }
        }

        resultPtr = result;

        do
        {
            if(resultPtr -> val >= 10)
            {
                resultPtr ->val -= 10;

                if(resultPtr -> next != nullptr)
                {
                    resultPtr -> next -> val += 1;
                }
                else
                {
                    resultPtr -> next = new ListNode(1);
                }
            }

            resultPtr = resultPtr -> next;
        }
        while(resultPtr != nullptr);

        return result;
    }
};
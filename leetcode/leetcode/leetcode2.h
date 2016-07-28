
#ifndef leecode350
#define leecode350
#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
namespace lee350{
	
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
	class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			ListNode result(0);
			ListNode * p1;
			ListNode * p2;
			p1=l1;
			p2=l2;
			while(1)
			{
				if(p1==NULL && p2==NULL)
				{
					break;
				}
				else if(p1!=NULL && p2 !=NULL)
				{
					int t1=p1->val+p2->val;
					if(result==NULL)
					{
						
					}
					else
					{
						ListNode temp(t1);
					}
				}
            
			}
		}
	};
};
#endif
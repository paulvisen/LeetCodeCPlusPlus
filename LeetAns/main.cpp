#include <iostream>
using namespace std;

struct  ListNode{

	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL){}
};

class Solution {
public :
	bool hasCycle(ListNode *head){
		ListNode *first = head;
		ListNode *second = head;

		while (first != NULL&&second != NULL&&second->next != NULL)
		{
			first = first->next;
			second = second->next->next;
			if (first = second)
				return true;
		}
		return false;
	}
};


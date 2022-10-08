#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

int LengthLL(node* head) {
	int ans = 0;
	while (head != NULL) {
		head = head->next;
		ans++;
	}
	return ans;
}

void InsertAtFront(node* &head, node* &tail, int d) {
	if (head == NULL) {
		node* n = new node(d);
		head = tail = n;
	}
	else {
		node* n = new node(d);
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head, node* &tail, int data) {
	if (head == NULL) {
		head = tail = new node(data);
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void InsertAtMid(node* &head, node* &tail, int data, int pos) {
	if (pos == 0) {
		InsertAtFront(head, tail, data);
	}
	else if (pos >= LengthLL(head)) {
		InsertAtEnd(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}

//////////////////////////// DELETE IN LL //////////////////////////////////
void deleteAtFront(node* &head, node* &tail) {
	if (head == NULL) {
		return ;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}
		delete tail;
		temp->next = NULL;
		tail = temp;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= LengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			temp = temp->next;
		}

		node* n = temp->next;
		temp->next = n->next;
		delete n;
	}
}

//////////////////////////// DELETE IN LL //////////////////////////////////


//////////////////////////// REVERSE A LL //////////////////////////////////
void reverseLL(node* &head, node*  &tail) {
	node* c = head;
	node* p = NULL;

	while (c != NULL) {
		node* n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}
//////////////////////////// !REVERSE A LL //////////////////////////////////

//////////////////////////// REVERSE A LL-Recursion //////////////////////////////////
void reverseLLRecursionHelper(node* c, node* p) {
	if (c == NULL) {
		return;
	}

	node* n = c->next;
	c->next = p;
	reverseLLRecursionHelper(n, c);
}

void reverseLLRecursion(node* &head, node* &tail) {
	reverseLLRecursionHelper(head, NULL);
	swap(head, tail);
}


//////////////////////////// !REVERSE A LL-Recursion //////////////////////////////////


//////////////////////////// MergeTwo Sorted List //////////////////////////////////
node* mergeSortedLL(node* h1, node* h2) {
	// base case
	if (h2 == NULL) {
		return h1;
	}
	if (h1 == NULL) {
		return h2;
	}

	// recursive case
	node* nH = NULL;
	if (h1->data < h2->data) {
		nH = h1;
		nH->next = mergeSortedLL(h1->next, h2);
	}
	else {
		nH = h2;
		nH->next = mergeSortedLL(h1, h2->next);
	}
	return nH;
}
//////////////////////////// !MergeTwo Sorted List //////////////////////////////////




//////////////////////////// Middle of LL //////////////////////////////////
node* midLL(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* slow = head;
	node* fast  = head->next;

	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
//////////////////////////// !Middle of LL //////////////////////////////////




//////////////////////////// MERGE-SORT LL //////////////////////////////////
node* mergeSort(node* head) {
	// base case
	if (!head || !head->next) {
		return head;
	}

	// recursive case
	// 1. Divide LL
	node* m = midLL(head);
	node* a = head;
	node* b = m->next;
	m->next =  NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	node* nH = mergeSortedLL(a, b);
	return nH;
}
//////////////////////////// @MERGE-SORT LL //////////////////////////////////


//////////////////////////// Bubble-SORT LL //////////////////////////////////
void BubbleSortLL(node* &head) {
	int len = LengthLL(head);
	for (int i = 0; i < len - 1; ++i)
	{
		node*c = head, *p = NULL;
		while (c !=  NULL and c->next != NULL) {
			node* n = c->next;
			if (c->data > n->data) {
				// swapping hogi
				if (p == NULL) {
					c->next = n->next;
					n->next = c;
					p = head = n;
				}
				else {
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else {
				// swapping nahi hogi
				p = c;
				c = n;
			}
		}
	}
}

//////////////////////////// !Bubble-SORT LL //////////////////////////////////





//////////////////////////// Break Cycle LL //////////////////////////////////
void breakCycle(node* head, node* fast) {
	node* slow = head;
	node* temp = head;
	while (temp->next != fast) {
		temp = temp->next;
	}

	while (fast != slow) {
		temp = fast;
		fast = fast	-> next;
		slow = slow -> next;
	}
	temp->next = NULL;
}
//////////////////////////// !Break Cycle LL //////////////////////////////////

//////////////////////////// Cycle Detection LL //////////////////////////////////
bool isCyclic(node* head) {
	node* f = head, *s = head;
	while (f and f->next) {
		f = f->next->next;
		s = s->next;
		if (s == f) {
			breakCycle(head, f);
			return true;
		}
	}

	return false;
}
//////////////////////////// !Cycle Detection LL //////////////////////////////////

void createCycle(node* head, node* tail) {
	tail->next = head->next->next->next;
}


int main() {
	node *head = NULL, *tail = NULL;
	// node *head1 = NULL, *tail1 = NULL;


	InsertAtEnd(head, tail, 10);
	InsertAtEnd(head, tail, 3);
	InsertAtEnd(head, tail, 15);
	InsertAtEnd(head, tail, 6);
	InsertAtEnd(head, tail, 4);
	InsertAtEnd(head, tail, 2);
	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 5);
	printLL(head);

	createCycle(head, tail);
	isCyclic(head);
	printLL(head);

	// InsertAtEnd(head1, tail1, 2);
	// InsertAtEnd(head1, tail1, 4);
	// InsertAtEnd(head1, tail1, 7);
	// InsertAtEnd(head1, tail1, 9);
	// InsertAtEnd(head1, tail1, 10);

	// printLL(head);
	// printLL(head1);
	// head = mergeSort(head);
	// BubbleSortLL(head);
	// head = mergeSortedLL(head, head1);
	// if (isCyclic(head) != true) {
	// 	printLL(head);
	// }
	// else {
	// 	cout << "Print mat kar be, cycle hai\n";
	// }



	// cout << "Length: " << LengthLL(head) << endl;
	// deleteAtMid(head, tail, 2);
	// InsertAtMid(head, tail, 100, 5);

	// printLL(head);
	// reverseLL(head, tail);
	// reverseLLRecursion(head, tail);
	// printLL(head);

	// cout << "Length: " << LengthLL(head) << endl;

	// while (head != NULL) {
	// 	printLL(head);
	// 	deleteAtFront(head, tail);
	// }


	return 0;
}

















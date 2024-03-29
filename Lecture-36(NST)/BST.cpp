// BST.cpp
#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int d) {
	if (!root) {
		root  = new node(d);
		return root;
	}

	if (root->data >= d) {
		root->left = insertInBST(root->left, d);
	}
	else {
		root->right = insertInBST(root->right, d);
	}
	return root;
}
// 8 3 10 1 6 14 4 7 13 -1
node* createBST() {
	int data;
	cin >> data;
	if (data  == -1) {
		return NULL;
	}
	node* root = NULL;
	while (data != -1) {
		root = insertInBST(root, data);

		cin >> data;
	}
	return root;
}

node* searchBST(node* root, int key) {
	// base case
	if (!root) return NULL;
	// recursive case
	if (root->data == key) {
		return root;
	}
	else if (root->data > key) {
		return searchBST(root->left, key);
	}
	else {
		return searchBST(root->right, key);
	}
}


void preorder(node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void printRange(node* root, int k1, int k2) {
	if (root == NULL) {
		return;
	}
	printRange(root->left, k1, k2);
	if (root->data >= k1 and root->data <= k2) cout << root->data << " ";
	printRange(root->right, k1, k2);
}

class Pair {
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root) {
	// base case
	Pair p;
	if (!root) {
		p.height  = 0;
		p.balanced = true;
		return p;
	}

	// recursive case
	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	if (left.balanced and right.balanced
	        and abs(left.height - right.height) <= 1) {
		p.balanced = true;
	}
	else {
		p.balanced = false;
	}

	p.height = max(left.height, right.height) + 1;
	return p;
}

bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX) {
	// base case
	if (!root) {
		return true;
	}

	// recursive case
	if (root->data >= mi and root->data <= mx and
	        isBST(root->left, mi, root->data) == true and
	        isBST(root->right, root->data, mx) == true
	   ) {
		return true;
	}
	return false;
}

node* createBalancedBST(int *a, int s, int e) {
	// base case
	if (s > e) {
		return  NULL;
	}
	int m = (s + e) / 2;
	node* root = new node(a[m]);
	root->left = createBalancedBST(a, s, m - 1);
	root->right = createBalancedBST(a, m + 1, e);
	return root;
}

class LinkedList {
public:
	node* head, *tail;
};

LinkedList BSTtoLL(node* root) {
	LinkedList l;
	// base case
	if (!root) {
		l.head = l.tail =  NULL;
		return l;
	}

	// recursive case
	if (root->left and root->right) {
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		left.tail->right  = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
	else if (root->left and !root->right) {
		LinkedList left  = BSTtoLL(root->left);
		left.tail->right  = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if (!root->left and root->right) {
		LinkedList right =  BSTtoLL(root->right);
		root->right = right.head;
		l.head  = root;
		l.tail  = right.tail;
		return l;
	}
	else {
		l.head = l.tail = root;
		return l;
	}
}

int main() {

	// node* root = createBST();
	int a[] = {1, 2, 3, 4, 5, 6, 7, 10};
	int n = sizeof(a) / sizeof(int);

	node* root =  createBalancedBST(a, 0, n - 1);
	LinkedList l = BSTtoLL(root);

	node* head = l.head;
	while (head) {
		cout << head->data << "-->";
		head =  head->right;
	}
	cout << "NULL\n";

	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;
	// printRange(root, 4, 10);
	// cout << endl;

	// node* ans = searchBST(root, 140);
	// if (ans) {
	// 	cout << ans->data << endl;
	// }
	// else {
	// 	cout << "Not found\n";
	// }

	// Pair p = isBalanced(root);
	// cout << "Height: " << p.height << endl;
	// if (p.balanced) {
	// 	cout << "balanced hai\n";
	// }
	// else {
	// 	cout << "balanced nahi hai\n";
	// }

	// if (isBST(root)) {
	// 	cout << "BST hai\n";
	// }
	// else {
	// 	cout << "BST nahi hai\n";
	// }

	return 0;
}

















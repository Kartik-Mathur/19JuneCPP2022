// BinaryTrees.cpp
#include <iostream>
using namespace std;
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
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

node* createTree() {
	// base case
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}
	// recursive case
	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();
	return root;
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

int countNodes(node* root) {
	// base case
	if (!root) return 0;

	// recursive case
	// int leftKaCount = countNodes(root->left);
	// int rightKaCount = countNodes(root->right);
	return countNodes(root->left) + countNodes(root->right)  + 1;
}

int height(node* root) {
	if (!root) return 0;

	return max(height(root->left) , height(root->right))  +  1;
}

int diameter(node* root) {
	if (!root) return 0;

	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root) {
	Pair ans;
	if (!root) {
		ans.height = ans.diameter = 0;
		return ans;
	}

	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	ans.height = max(left.height, right.height) + 1;
	int op1 = left.height  + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;

	ans.diameter = max(op1, max(op2, op3));
	return ans;
}


int main() {

	node *root = createTree();

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;

	cout << "Total Nodes: " << countNodes(root) << endl;
	cout << "Tree height: " << height(root) << endl;
	cout << "Tree diameter: " << diameter(root) << endl;


	Pair ans = fastDiameter(root);
	cout << "Tree Fast height: " << ans.height << endl;
	cout << "Tree Fast diameter: " << ans.diameter << endl;

	return 0;
}

















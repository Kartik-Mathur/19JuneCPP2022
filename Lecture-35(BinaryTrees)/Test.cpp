#include <iostream>
#include <queue>
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

int height(node* root) {
	if (!root) return 0;

	return max(height(root->left) , height(root->right))  +  1;
}

void mirror(node* root) {
	if (!root) return;

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

void levelOrder(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();
		if (f != NULL) {
			cout << f->data << " ";
			if (f->left != NULL) {
				q.push(f->left);
			}
			if (f->right != NULL) {
				q.push(f->right);
			}
		}
		else {
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}
	}
}

node* levelWiseBuild() {
	int data;
	cout << "Enter root data: ";
	cin >> data;
	if (data == -1) {
		return NULL;
	}

	node* root = new node(data);
	queue<node*> q;
	q.push(root);
	while (!q.empty()) {
		node* f = q.front();
		q.pop();

		cout << "Enter data for: " << f->data << " ";
		int l, r;
		cin >> l >> r;
		if (l != -1) {
			f->left = new node(l);
			q.push(f->left);
		}
		if (r != -1) {
			f->right = new node(r);
			q.push(f->right);
		}
	}
	return root;
}

int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int k = 0;
int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};

node* makeTree(int *in, int s, int e) {
	// base case
	if (s > e) return NULL;
	// recursive case
	node* root = new node(pre[k++]);
	int i = -1;
	for (int j = s; j <= e; ++j)
	{
		if (in[j] == root->data) {
			i = j;
			break;
		}
	}
	root->left = makeTree(in, s, i - 1);
	root->right = makeTree(in, i + 1, e);

	return root;
}

int main() {

	// node *root = createTree();
	// node *root = levelWiseBuild();
	node *root = makeTree(in, 0, 8);

	// mirror(root);
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	levelOrder(root);


	return 0;
}

















#include <iostream>
using namespace std;

class node {
public:
	string key;
	int value;
	node* next;
	node(string k, int v) {
		key = k;
		value = v;
		next = NULL;
	}
};

class Hashmap {
	int hashFunction(string key) {
		int ans = 0;
		int mul = 1;
		for (int i = 0; i < key.length() ; ++i)
		{
			ans += (key[i] % ts) * (mul % ts);
			ans  %= ts;
			mul *= 37;
			mul %= ts;
		}
		return ans % ts;
	}

	void rehash() {
		node** oldh = h;
		int oldts =  ts;
		h = new node*[2 * ts];

		cs = 0;
		ts = 2 * ts;
		for (int i = 0; i < ts; ++i)
		{
			h[i] = NULL;
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* head =  oldh[i];
			while (head) {
				insert(head->key, head->value);
				head = head->next;
			}
		}
	}
public:
	node** h;
	int ts;
	int cs;

	Hashmap(int s = 7) {
		h = new node*[s];
		cs = 0;
		ts = s;
		for (int i = 0; i < s; ++i)
		{
			h[i] = NULL;
		}
	}

	void insert(string key, int value) {
		int hashIndx = hashFunction(key);
		node* n = new node(key, value);
		n->next = h[hashIndx];
		h[hashIndx] = n;
		cs++;

		float load_factor = cs / (ts * 1.0);
		if (load_factor > 0.5) {
			rehash();
		}
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			node* head =  h[i];
			cout << i << "--> ";
			while (head) {
				cout << "(" << head->key << ", " << head->value << ")";
				head = head->next;
			}
			cout << endl;
		}
	}

};

int main() {

	Hashmap h;
	h.insert("mango", 100);
	h.insert("guava", 80);
	h.insert("Papaya", 120);
	h.insert("Kiwi", 20);

	h.print();


	return 0;
}

















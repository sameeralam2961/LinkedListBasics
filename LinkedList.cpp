#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node *next;
	
	Node* createNode(int x){
		
		Node* temp = new Node;
		temp -> data = x;
		temp -> next = NULL;
		
		return temp;
	}
	
	void printNode(Node *head){
		while(head){
			cout << head -> data << " ";
			head = head -> next;
		}
		cout << endl;
	}
	
	void insertBeg(int x, Node*& head){
		Node* temp = new Node;
		temp -> data = x;
		temp -> next = head;
		head = temp;
	}
	
	void reverseNode(Node*& head){
		Node *current, *prev, *after;
		current = head;
		prev = NULL;
		after = NULL;
		while(current){
			after = current -> next;
			current -> next = prev;
			prev = current;
			current = after;
		}
		head = prev;
	}
	
	void deleteAll(int x, Node*& head){
		Node *current, *del, *temp, *traverse;
		current = head;
		while(current -> data == x){
			del = current;
			current = current -> next;
			head = current;
			delete(del);
		}
		traverse = current;
		while(traverse){
			temp = traverse -> next;
			while(temp && temp -> data == x){
				del = temp;
				temp = temp -> next;
				delete(del);
			}
			current = traverse;
			traverse = temp;
			current -> next = temp;
		}
	}
	
	void middleNode(Node* head){
		Node *one = head, *two = head;
		while(two -> next && two -> next -> next){
			one = one -> next;
			two = two -> next -> next;
		}
		cout << one -> data;
	}
	
	
	
	
};

Node *head = NULL;

void solve(void){
	Node O;
	O.insertBeg(1, head);
	O.printNode(head);
	O.insertBeg(3, head);
	O.printNode(head);
	O.insertBeg(1, head);
	O.printNode(head);
	O.insertBeg(8, head);
	O.printNode(head);
	O.insertBeg(1, head);
	O.printNode(head);
	O.insertBeg(2, head);
	O.printNode(head);
	O.insertBeg(1, head);
	O.printNode(head);
	O.deleteAll(1, head);
	O.printNode(head);
}

signed main() {
int t = 1;
	while(t--)
    solve();

    return 0;
}

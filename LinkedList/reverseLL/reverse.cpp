#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr(vector<int> &arr){
    if(arr.size() == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover= mover->next;
    }
    return head;
}

Node* reverseLL(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

void print(Node* head){ 
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
}
int main() {
    vector<int> arr = {10, 20, 25, 35, 40};
    Node* head = convertArr(arr);
    head = reverseLL(head);
    print(head);
    return 0;
}